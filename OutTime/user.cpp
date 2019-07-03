#include "user.h"
#include "message.h"
User *user;
User::User()
{
    state=0;

}
int User::getid()
{

}

//bool User::sendMessage(int toID, QString context)
//{
//    QTime time = QTime::currentTime();
//    QDate date = QDate::currentDate();
//    Message* m1= new Message(user->getid(),toID,context,date,time);

//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("insert into message values('%1','%2','%3','%4')").arg(user->()).arg(toID).arg(context).arg(date);
//    query.prepare(str);
//    query.exec();
//    db.close();
//}

//int User::messagenum()
//{
//    int num=0;
//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("select toID from message where toID='%1").arg(user->getid());
//    query.prepare(str);
//    query.exec();
//    while(query.next())
//    {
//        num++;
//    }
//    db.close();
//    return num;

//}
