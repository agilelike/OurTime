#include "mainwindow.h"
#include "desktop.h"
#include <QApplication>
#include"login.h"
#include"signup.h"

//数据库的需要的头文件
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTextCodec>
#include <QSqlError>
int ReturnWeekDay( unsigned int iYear, unsigned int iMonth, unsigned int iDay )
{
    int iWeek = 0;
    unsigned int y = 0, c = 0, m = 0, d = 0;

    if ( iMonth == 1 || iMonth == 2 )
    {
        c = ( iYear - 1 ) / 100;
        y = ( iYear - 1 ) % 100;
        m = iMonth + 12;
        d = iDay;
    }
    else
    {
        c = iYear / 100;
        y = iYear % 100;
        m = iMonth;
        d = iDay;
    }

    iWeek = y + y / 4 + c / 4 - 2 * c + 26 * ( m + 1 ) / 10 + d - 1;    //蔡勒公式
    iWeek = iWeek >= 0 ? ( iWeek % 7 ) : ( iWeek % 7 + 7 );    //iWeek为负时取模
    if ( iWeek == 0 )    //星期日不作为一周的第一天
    {
        iWeek = 7;
    }

    return iWeek;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    login L;
    signup Sign;
    QObject::connect(&L,SIGNAL(showsignup()),&Sign,SLOT(receivelogin()));
    Desktop w;

    HWND desktopHwnd = w.findDesktopIconWnd();
    if(desktopHwnd) SetParent((HWND)w.winId(), desktopHwnd);
    w.show();
    //L.show();

//数据库的测试
//    qDebug() << QSqlDatabase::drivers();
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("test");
//    db.setUserName("root");
//    db.setPassword("2219151588");
//    bool ok = db.open();
//    if (ok) {
//        qDebug() << "连接数据库ok";
//    }
//    else
//    {
//        qDebug() << "连接数据库失败";
//    }
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");

//    query.exec("create table course (id int primary key, name varchar(20), teacher varchar(20))");
//    query.exec("insert into course values(0, '数学', '刘老师')");
//    query.exec("insert into course values(1, '英语', '张老师')");
//    query.exec("insert into course values(2, '计算机', '李老师')");



    return a.exec();
}
