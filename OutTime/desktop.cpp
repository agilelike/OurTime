#include "desktop.h"
#include "ui_desktop.h"
#include "stdio.h"
#include <QDesktopWidget>
#include <QBitmap>
#include <QPainter>
#include "mainwindow.h"
#include <QTimer>
#include <QString>
#include <QDateTime>
#include <QGraphicsView>

static bool enumUserWindowsCB(HWND hwnd,LPARAM lParam)
{
    long wflags = GetWindowLong(hwnd, GWL_STYLE);
    if(!(wflags & WS_VISIBLE)) return TRUE;

    HWND sndWnd;
    if( !(sndWnd=FindWindowEx(hwnd, NULL, L"SHELLDLL_DefView", NULL)) ) return TRUE;
    HWND targetWnd;
    if( !(targetWnd=FindWindowEx(sndWnd, NULL, L"SysListView32", L"FolderView")) ) return TRUE;

    HWND* resultHwnd = (HWND*)lParam;
    *resultHwnd = targetWnd;
    return FALSE;
}

HWND Desktop::findDesktopIconWnd()
{
    HWND resultHwnd = NULL;
    EnumWindows((WNDENUMPROC)enumUserWindowsCB, (LPARAM)&resultHwnd);
    return resultHwnd;
}

Desktop::Desktop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    //界面无边框
    setWindowFlags(Qt::FramelessWindowHint);
    //界面透明
    setAttribute(Qt::WA_TranslucentBackground, true);

    this->move(1400,150);
    ui->Button1->setStyleSheet("QPushButton{font:bold;border-radius:20px;font-size:16px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255 ,150);}"
                                "QPushButton:hover{font:bold;border-radius:20px;font-size:16px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255 ,150);}"
                                "QPushButton:pressed{font:bold;border-radius:20px;font-size:16px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255 ,150);}");

    ui->Button2->setStyleSheet("QPushButton{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255 ,150);}"
                              "QPushButton:hover{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255 ,150);}"
                              "QPushButton:pressed{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255 ,150);}");

    //最小化到托盘
    QIcon icon = QIcon(":/Image/time.png");
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(icon);
    trayIcon->setToolTip("ourtime");
    trayIcon->show();

    minAction = new QAction("最小化",this);
    connect(minAction,SIGNAL(triggered()),this,SLOT(hide()));
    restoreAction = new QAction("还原",this);
    connect(restoreAction,SIGNAL(triggered()),this,SLOT(showNormal()));
    quitAction = new QAction("退出",this);
    connect(quitAction,SIGNAL(triggered()),qApp,SLOT(quit()));

    //菜单
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(minAction);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addAction(quitAction);
    trayIcon->setContextMenu(trayIconMenu);

    //显示时间
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    timer->start(1000); // 每次发射timeout信号时间间隔为1秒
}


void Desktop::paintEvent(QPaintEvent *e)
{
    //设置
    QBitmap bmp(this->size());
    bmp.fill();
    QPainter p1(&bmp);
    p1.setPen(Qt::NoPen);
    p1.setBrush(Qt::black);
    p1.drawRoundedRect(bmp.rect(),20,20);
    setMask(bmp);

    //设置背景画笔格式
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QFont font;
    font.setPointSize(10);
    font.setFamily("Segoe Print");
    painter.setFont(font);

    //设置背景渐变，一共两部分，左上角到右下角
    QLinearGradient linearGrad(0,0,width(),height());
    linearGrad.setColorAt(0 ,QColor(75,100,50,150));  //左上角
    linearGrad.setColorAt(1 ,QColor(150,20,100,150)); //右下角
    painter.setBrush(linearGrad);
    painter.drawRoundedRect(rect(),20,20);

    /***设置内容区***/
    painter.setPen(QColor(0,0,0)); //边界为黑色线
    painter.setBrush(QColor(255,255,255,125));  //中间为白色透明
    painter.drawRoundedRect(15,10,420,50,10,10);  //圆角矩形

    //内容区背景渐变
    QLinearGradient linearGrad2(15,70,420,480);
    linearGrad2.setColorAt(0 ,QColor(255,255,255,150));
    linearGrad2.setColorAt(0.25 ,QColor(255,255,255,50));
    linearGrad2.setColorAt(0.5 ,QColor(255,255,255,150));
    linearGrad2.setColorAt(0.75 ,QColor(255,255,255,50));
    linearGrad2.setColorAt(1 ,QColor(255,255,255,150));
    painter.setBrush(linearGrad2);
    painter.drawRoundedRect(15,70,420,480,10,10);

    QWidget::paintEvent(e);
}

void Desktop::timeUpdate()
{
    QDateTime dt;
    QTime time;
    QDate date;

    dt.setTime(time.currentTime());
    dt.setDate(date.currentDate());

    QString currentDate = dt.toString("yyyy:MM:dd hh:mm:ss");
    ui->time_value->setText(currentDate);
}


Desktop::~Desktop()
{
    delete ui;
}

void Desktop::on_Button1_clicked()
{
    if(ui->Button1->text()=="团队"){
        ui->Button1->setText("个人");
        ui->label->setText("6:00~6:30       wake up");
        ui->label_2->setText("6:30~7:00       wash and rinse");
        ui->label_3->setText("7:00~8:00       have a breakfast");
        ui->label_4->setText("8:00~9:30       computer network");
        ui->label_5->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->show();
        ui->label_17->show();
        ui->label_18->show();
        ui->label_19->show();
    }
    else{
        ui->Button1->setText("团队");
        ui->label->setText("6:00~6:30       task1");
        ui->label_2->setText("6:30~7:00       task2");
        ui->label_3->setText("7:00~8:00       task3");
        ui->label_4->setText("8:00~9:30       task4");
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->label_18->hide();
        ui->label_19->hide();
    }

}

void Desktop::on_Button2_clicked()
{
    MainWindow * win = new MainWindow;
    win->show();
}

void Desktop::on_start_tomato_clicked()
{
    if(tomatoClo == 0)
    {
        tomatoClo = new tomatoClock(this ,"mathematical modeling" ,6);
        tomatoClo->move(20,70);
        tomatoClo->show();
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
        ui->label_9->hide();
        ui->label_10->hide();
        ui->label_11->hide();
        ui->label_12->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->label_18->hide();
        ui->label_19->hide();
    }
    else
    {
        delete tomatoClo;
        tomatoClo = 0;
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
        ui->label_9->show();
        ui->label_10->show();
        ui->label_11->show();
        ui->label_12->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->show();
        ui->label_17->show();
        ui->label_18->show();
        ui->label_19->show();
    }
}
