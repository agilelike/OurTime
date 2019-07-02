#include "user.h"
User *user;
User::User()
{
    state=0;

}
bool User::login(QString _name,QString pwd)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userID,userName,teamID,state from user where userName = '%1' and password = '%2'").arg(_name).arg(pwd);
    query.exec(str);
    if(query.first())
    {
        name=query.value(1).toString();
        teamid=query.value(2).toInt();
        teamState=query.value(3).toInt();
        id=query.value(0).toInt();
        query.exec("SET NAMES 'UTF8'");
        db.close();
        return 1;
    }else
    {
        query.exec("SET NAMES 'UTF8'");
        db.close();
        return 0;
    }

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

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set teamID='%1'").arg(_id);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamid=_id;
    return 1;
}

bool User::setTeamState(int _state)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str=QString("update user set state='%1'").arg(_state);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    db.close();
    teamState=_state;
    return 1;
}


bool User::createTeam(QString Name)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
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
    user->setTeamState(1);
    user->setTeamid(_id);
    return 1;
}

bool User::applyToTeam(int teamid)
{
    user->setTeamState(3);
    user->setTeamid(teamid);
    team->updateTeam();
    return 1;
}

bool User::dismissTeam()
{
    if(user->getTeamState()==0)
        return 0;

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
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
    user->setTeamState(0);
    user->setTeamid(0);
    return 1;
}
