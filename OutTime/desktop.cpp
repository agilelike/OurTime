#include "desktop.h"
#include "ui_desktop.h"
#include "stdio.h"
#include <QDesktopWidget>
#include <QBitmap>
#include <QPainter>

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
    ui->Button1->setStyleSheet("QPushButton{font:bold;border-radius:30px;font-size:20px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255);}"
                                "QPushButton:hover{font:bold;border-radius:30px;font-size:20px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255);}"
                                "QPushButton:pressed{font:bold;border-radius:30px;font-size:20px;color: rgb(85, 175, 255);\
                                background-color: rgb(255, 255, 255);}");

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

    //设置背景颜色（前三个数）和透明度（最后一个数）
    QPainter painter(this);
    painter.fillRect(rect(), QColor(100,100,100,100));

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
