#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include <QTimer>
#include <QPainter>
#include <QString>
#include <QGraphicsEffect>
#include <QMessageBox>
#include <qmath.h>

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
    ui->state->setStyleSheet("color:rgb(255,45,81)");
    ui->state->setText("work");

    setStyleSheet("background: transparent;border:20px");
    setStyleSheet("background: transparent");
    setWindowFlags(Qt::FramelessWindowHint);

    //显示番茄图像背景
    ui->tomato_graphic->setAttribute(Qt::WA_TranslucentBackground ,true);
    ui->tomato_graphic->setPixmap(QPixmap(":/imag/Image/tomato.png").scaled(ui->tomato_graphic->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    QGraphicsEffect *effect = new QGraphicsOpacityEffect();
    dynamic_cast<QGraphicsOpacityEffect*>(effect)->setOpacity(opacity);
    ui->tomato_graphic->setGraphicsEffect(effect);

    QTimer *timer1 = new QTimer(this);
    connect(timer1 ,SIGNAL(timeout()) ,this ,SLOT(fade_on_fade_out()));
    timer1->start(60);

    //显示时间
    QTimer *timer2=new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(clockUpdata()));
    timer2->start(1000); // 每次发射timeout信号时间间隔为1秒
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

void tomatoClock::paintEvent(QPaintEvent *e)
{
    //计算番茄钟剩余时间所占比例
    double part;
    part = (double)(current_min + current_sec / 60.0) / 30.0000;
    //重新绘制番茄钟
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::red,5,Qt::SolidLine));
    painter.drawArc(30,80,360,360 ,1440,1440 * 4 * part);

    QWidget::paintEvent(e);
}

void tomatoClock::fade_on_fade_out()
{
    float step = 0;
    if(opacityFlag == 0)
        step = 0.005;
    else
        step = -0.005;

    opacity += step;

    if(qAbs(opacity - 0.9) <= 0.001)
        opacityFlag = 1;

    if(qAbs(opacity - 0.4) <= 0.001)
        opacityFlag = 0;

    dynamic_cast<QGraphicsOpacityEffect*>(ui->tomato_graphic->graphicsEffect())->setOpacity(opacity);
}
