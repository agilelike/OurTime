#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include <QTimer>
#include <QPainter>
#include <QString>

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
    current_min = 29;
    current_sec = 59;
    ui->state->setText("work");

//    setStyleSheet("background: transparent;border:0px");
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
    //更新番茄钟时间与当前状态
    if(current_sec >= 0)
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
            }
        }
    }

    //更新番茄钟时间
    QString time;
    time.sprintf("%02d:%02d" ,current_min ,current_sec);
    ui->remained_time->setText(time);

    //更新番茄钟状态
    if(current_min >= 5)
    {
        ui->state->setText("work");
    }
    else if(current_min == 0 && current_sec == 0 && tomato_number == 0)
    {
        ui->state->setText("finish");
    }
    else
    {
        ui->state->setText("rest");
    }

    update();
}

void tomatoClock::paintEvent(QPaintEvent *e)
{
    //计算番茄钟剩余时间所占比例
    float part;
    part = (current_min + current_sec / 60.0) *  (1.0 / 30);
    //重新绘制番茄钟
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::red,5,Qt::SolidLine));
    painter.drawArc(40,90,340,340 ,1440,1440 * 4 * part);

    QWidget::paintEvent(e);
}
