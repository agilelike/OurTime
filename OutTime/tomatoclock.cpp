#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QPainter>
#include <QString>
#include <journal.h>
#include <QDateTime>

tomatoClock::tomatoClock(QWidget *parent ,QString currentTask ,int tomatoNumber) :
    QDialog(parent),
    ui(new Ui::tomatoClock)
{
    ui->setupUi(this);

    ui->task_value->setText(currentTask);
    tomato_number = tomatoNumber;

    QString number;
    number.sprintf("X%d" ,tomatoNumber);
    ui->tomatoNum->setText(number);
    current_min = 0;
    current_sec = 4;
    ui->state->setStyleSheet("color:rgb(255,45,81)");
    ui->state->setText("work");

    setStyleSheet("background: transparent;border:20px");
    setStyleSheet("background: transparent");
    setWindowFlags(Qt::FramelessWindowHint);

    //显示时间
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(clockUpdata()));
    timer->start(1000); // 每次发射timeout信号时间间隔为1秒
}

tomatoClock::~tomatoClock()
{
    delete ui;
}

void tomatoClock::clockUpdata()
{
    //更新番茄钟时间与剩余个数
    if(current_sec > 0)
        current_sec--;
    else
    {
        if(current_min >= 1)
        {
            current_min--;
            current_sec = 59;
        }
        else
        {
            if(tomato_number > 0)
            {
                current_min = 29;
                current_sec = 59;

                tomato_number--;
                QString number;
                number.sprintf("X%d" ,tomato_number);
                ui->tomatoNum->setText(number);
            }

            addTomatoClock();
        }
    }

    //更新番茄钟时间
    QString time;
    time.sprintf("%02d:%02d" ,current_min ,current_sec);
    ui->remained_time->setText(time);

    //更新番茄钟状态
    if(current_min >= 5)
    {
        ui->state->setStyleSheet("color:rgb(255,45,81)");
        ui->state->setText("work");
    }
    else if(current_min == 0 && current_sec == 0 && tomato_number == 0)
    {
        ui->state->setStyleSheet("color:rgb(0,0,0)");
        ui->state->setText("finish");
    }
    else
    {
        ui->state->setStyleSheet("color:rgb(0,255,255)");
        ui->state->setText("rest");
    }

    update();
}

void tomatoClock::addTomatoClock()
{
    User user = {1};

    QDate date;
    QString current_date;
    current_date.sprintf("%d-%02d-%02d" ,date.currentDate().year() ,date.currentDate().month() ,date.currentDate().day());

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
    db.setPort(3306);                 //连接数据库端口号，与设置一致
    db.setDatabaseName("ourtime");      //连接数据库名，与设置一致
    db.setUserName("root");          //数据库用户名，与设置一致
    db.setPassword("990622");    //数据库密码，与设置一致
    db.open();

    QSqlQuery query(db);
    query.prepare("update journal set clockNumber = clockNumber + 1 where date = ? and userID = ?");
    query.addBindValue(current_date);
    query.addBindValue(user.userID);
    query.exec();

    db.close();
}

void tomatoClock::paintEvent(QPaintEvent *e)
{
    //计算番茄钟剩余时间所占比例
    double part;
    part = (double)(current_min + current_sec / 60.0) / 30.0000;
    //重新绘制番茄钟
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::red,7,Qt::SolidLine));
    painter.drawArc(40,90,340,340 ,1443,1440 * 4 * part);

    QWidget::paintEvent(e);
}
