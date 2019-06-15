#include "desktop.h"
#include "ui_desktop.h"
#include "stdio.h"
#include <QDesktopWidget>
#include <QBitmap>
#include <QPainter>
#include "mainwindow.h"

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
                                background-color: rgb(255, 255, 255);}"
                                "QPushButton:hover{font:bold;border-radius:20px;font-size:16px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255);}"
                                "QPushButton:pressed{font:bold;border-radius:20px;font-size:16px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255);}");

    ui->Button2->setStyleSheet("QPushButton{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255);}"
                              "QPushButton:hover{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255);}"
                              "QPushButton:pressed{font:bold;border-radius:5px;font-size:16px;color: rgb(85, 175, 255);\
                              background-color: rgb(255, 255, 255);}");

    //最小化到托盘
    QIcon icon = QIcon(":/new/image/time.png");
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

    //设置内容区
    painter.setPen(QColor(0,0,0)); //边界为黑色线
    painter.setBrush(QColor(255,255,255,125));  //中间为白色透明

    painter.drawRoundedRect(15,10,420,50,10,10);  //圆角矩形
    painter.drawRoundedRect(15,70,420,480,10,10);

    QWidget::paintEvent(e);
}

Desktop::~Desktop()
{
    delete ui;
}

void Desktop::on_Button1_clicked()
{
    if(ui->Button1->text()=="团队"){
        ui->Button1->setText("个人");
    }
    else{
        ui->Button1->setText("团队");
    }

}

void Desktop::on_Button2_clicked()
{
    MainWindow * win = new MainWindow;
    win->show();
}
