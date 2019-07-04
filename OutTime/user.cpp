#include "user.h"
#include <QDebug>
#include <QTextStream>
#include <stdio.h>
#include <QSqlQuery>
#include "message.h"
#include<QDateTime>

User *user;
User::User()
{
    state=0;

}
void User::freshSchedule()
{
    QDate date=QDate::currentDate();
    date.addDays(-date.dayOfWeek()+1);
    for(int i=0;i<7;i++){
        psche[i]=new pSchedule(date.addDays(i));
        tsche[i]=new pSchedule(date.addDays(i));
    }
}

bool User::login(QString _name,QString pwd)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userID from user where userName = '%1' and password = '%2'").arg(_name).arg(pwd);
    query.exec(str);
    if(query.first()){
        name = _name;
        id = query.value(0).toInt();
        state = 1;
        str = QString("select teamID,state from user where userID = '%1'").arg(id);
        query.exec(str);
        query.next();
        teamid = query.value(0).toInt();
        teamState = query.value(1).toInt();
        //QTextStream cout(stdout,  QIODevice::WriteOnly);
        //cout<<teamid<<teamState<<endl;
        query.exec("SET NAMES 'UTF8'");
        db.close();
        freshSchedule();
        return true;
    }
    else{
        query.exec("SET NAMES 'UTF8'");
        db.close();
        return false;
    }
}

int User::signup(QString name,QString pwd){
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    int id;
    query.exec("select userID from user");
    if(query.first()){
        query.last();
        id = query.value(0).toInt()+1;
    }
    else
        id = 1;
    QString str = QString("insert into user values('%1','%2',NULL,'%3',0)").arg(id).arg(name).arg(pwd);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    return id;
}

void User::logout()
{
    state=0;
}
int User::getState()
{
    return state;
}

int User::getid()
{
    return id;
}

QString User::getName()
{
    return name;
}

int User::getTeamState()
{
    return teamState;
}

int User::getTeamid()
{
    return teamid;
}

bool User::setTeamid(int _id)
{
    //数据库操作
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set teamID='%1' where userID = '%2'").arg(_id).arg(id);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamid=_id;
    return 1;
}

bool User::setTeamState(int _state)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set state='%1' where userID = '%2'").arg(_state).arg(id);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamState=_state;
    return 1;
}

bool User::setAllTeamid(int _id){
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set teamID='%1' where teamID = '%2'").arg(_id).arg(teamid);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamid=_id;
    return 1;
}

bool User::setAllTeamState(int _state)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set state='%1' where teamID = '%2'").arg(_state).arg(teamid);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamState=_state;
    return 1;
}

bool User::createTeam(QString Name)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    int _id;
    query.exec("select teamID from team");
    if(query.first()){
        query.last();
        _id = query.value(0).toInt()+1;
    }
    else
        _id = 1;
    QString str=QString("insert into team values('%1','%2')").arg(_id).arg(Name);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    user->setTeamState(2);
    user->setTeamid(_id);
    return 1;
}

bool User::applyToTeam(int teamid)
{
    user->setTeamState(3);
    user->setTeamid(teamid);
    team->updateTeam(teamid);
    return 1;
}

bool User::dismissTeam()
{
    if(user->getTeamState()==0)
        return 0;

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("delete from team where teamID='%2'").arg(user->getTeamid());
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    user->setAllTeamState(0);
    user->setAllTeamid(0);
    return 1;
}

bool User::exitTeam(){
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("update user set teamID = 0,state = 0 from team where userID='%1'").arg(user->getid());
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    user->setTeamState(0);
    user->setTeamid(0);
    return 1;
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
    QString str = QString("insert into message(senderID ,receiverID ,messagecontent ,datetime) values('%1','%2','%3','%4')").arg(user->getid()).arg(toID).arg(context).arg(currentDate);
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
    QString str = QString("select * from message where receiverID='%1'").arg(user->getid());
    query.prepare(str);
    query.exec();

    while(query.next())
    {
        num++;
    }
    db.close();
    return num;

}
