#include "user.h"
#include <QSqlQuery>
#include "message.h"
#include<QDateTime>
User *user;
User::User()
{
    state=0;

}
int User::getid()
{

}

bool User::sendMessage(int toID, QString context)
{
    QDateTime dt = QDateTime::currentDateTime();
    QString currentDate = dt.toString("yyyy:MM:dd hh:mm:ss");
    //Message* m1= new Message(user->getid(),toID,context,date,time);

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("root");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("insert into message(senderID ,receiverID ,messagecontent ,datetime) values('%1','%2','%3','%4')").arg(12345678).arg(toID).arg(context).arg(currentDate);
    query.prepare(str);
    query.exec();
    db.close();

}

int User::messagenum()
{
    int num=0;
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("root");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select * from message where receiverID='%1'").arg(12345687);
    query.prepare(str);
    query.exec();

    while(query.next())
    {
        num++;
    }
    db.close();
    return num;

}
