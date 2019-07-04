#include "mainwindow.h"
#include "desktop.h"
#include <QApplication>
#include"login.h"
#include"signup.h"
#include<user.h>
#include <information.h>
#include <showid.h>
#include <team.h>


//数据库的需要的头文件
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTextCodec>
#include <QSqlError>
int main(int argc, char *argv[])
{
    QSqlDatabase::addDatabase("QMYSQL","mysql");
    user=new User();
    team=new Team();
    QApplication a(argc, argv);
    MainWindow m;
    login L;
    signup Sign;
    showID si;
    QObject::connect(&L,SIGNAL(showsignup()),&Sign,SLOT(receivelogin()));
    QObject::connect(&Sign,SIGNAL(showLogin()),&L,SLOT(receiveShowLogin()));
    QObject::connect(&L,SIGNAL(showMainwindow()),&m,SLOT(receiveShowMainwindow()));
    QObject::connect(m.getInformation(),SIGNAL(showLogin()),&L,SLOT(receiveShowLogin()));
    QObject::connect(&Sign,SIGNAL(showID(int)),&si,SLOT(receiveShowID(int)));
    QObject::connect(&si,SIGNAL(showLogin()),&L,SLOT(receiveShowLogin()));
    Desktop w;

    HWND desktopHwnd = w.findDesktopIconWnd();
    if(desktopHwnd) SetParent((HWND)w.winId(), desktopHwnd);
    w.show();
    L.show();
    return a.exec();
}
