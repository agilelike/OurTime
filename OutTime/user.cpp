
#include "user.h"
#include <QDebug>
#include <QTextStream>
#include <stdio.h>
#include <desktop.h>

User *user;
User::User()
{
    state=0;

}
bool User::login(int id,QString pwd)
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
    QString str = QString("select userName from user where userID = '%1' and password = '%2'").arg(id).arg(pwd);
    query.exec(str);
    if(query.first()){
        name = query.value(0).toString();
        this->id = id;
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

void User::createDesktop(){
    w = new Desktop();
    HWND desktopHwnd = w->findDesktopIconWnd();
    if(desktopHwnd) SetParent((HWND)w->winId(), desktopHwnd);
    w->show();
}

void User::deleteDesktop(){
    delete w;
    w=0;
}

Desktop* User::getDesktop(){
    return w;

}
