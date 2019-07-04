#include "mainwindow.h"
#include "desktop.h"
#include <QApplication>

#include"login.h"
#include"signup.h"
#include<user.h>
#include <information.h>
#include <showid.h>
#include <team.h>
#include <journal.h>

//数据库的需要的头文件
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTextCodec>
#include <QSqlError>
int main(int argc, char *argv[])
{
    user=new User();
    team=new Team();
    QApplication a(argc, argv);
    login L;
    signup Sign;
    showID si;
    QObject::connect(&L,SIGNAL(showsignup()),&Sign,SLOT(receivelogin()));
    QObject::connect(&Sign,SIGNAL(showLogin()),&L,SLOT(receiveShowLogin()));
    QObject::connect(&Sign,SIGNAL(showID(int)),&si,SLOT(receiveShowID(int)));
    QObject::connect(&si,SIGNAL(showLogin()),&L,SLOT(receiveShowLogin()));
    L.show();


    return a.exec();
}
