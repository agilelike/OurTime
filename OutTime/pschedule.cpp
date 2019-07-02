#include "pschedule.h"
Schedule::Schedule()
{

}

pSchedule::pSchedule(bool person)
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
    QDate date=QDate::currentDate();
    if(person==0)
    {

        QString str = QString("select * from pschedule where userID = '%1' and Date = '%2'").arg(user->getid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.state=0;
            sche.t=QDate::fromString(query.value(0).toString(),"dd-MM-yyyy");
            sche.start=QTime::fromString(query.value(1).toString(),"hh:mm:ss");
            sche.end=QTime::fromString(query.value(2).toString(),"hh:mm:ss");
            sche.name=query.value(3).toString();
            sche.id=query.value(4).toInt();
            sche.isGrabed=query.value(6).toInt();

            s.append(sche);
        }

    }
    else if(person==1)
    {
        QString str = QString("select * from tschedule where teamID = '%1' and Date = '%2'").arg(user->getTeamid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.state=1;
            sche.t=QDate::fromString(query.value(0).toString(),"dd-MM-yyyy");
            sche.start=QTime::fromString(query.value(1).toString(),"hh:mm:ss");
            sche.end=QTime::fromString(query.value(2).toString(),"hh:mm:ss");
            sche.name=query.value(3).toString();
            sche.id=query.value(4).toInt();
            s.append(sche);
        }
        str = QString("select * from task where teamID = '%1' and to_days(deadline) = '%2'").arg(user->getTeamid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.id=query.value(0).toInt();
            sche.state=2;
            QDateTime t=QDateTime::fromString(query.value(2).toString(),"dd-MM-yyyy hh:mm:ss");
            sche.t=t.date();
            sche.end=t.time();
            sche.name=query.value(3).toString();
            s.append(sche);
        }
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
}
pSchedule::pSchedule(QDate day,bool person)
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
    QDate date=day;
    if(person==0)
    {

        QString str = QString("select * from pschedule where userID = '%1' and Date = '%2'").arg(user->getid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.state=0;
            sche.t=QDate::fromString(query.value(0).toString(),"dd-MM-yyyy");
            sche.start=QTime::fromString(query.value(1).toString(),"hh:mm:ss");
            sche.end=QTime::fromString(query.value(2).toString(),"hh:mm:ss");
            sche.name=query.value(3).toString();
            sche.id=query.value(4).toInt();
            sche.isGrabed=query.value(6).toInt();
            s.append(sche);
        }

    }
    else if(person==1)
    {
        QString str = QString("select * from tschedule where teamID = '%1' and Date = '%2'").arg(user->getTeamid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.state=1;
            sche.t=QDate::fromString(query.value(0).toString(),"dd-MM-yyyy");
            sche.start=QTime::fromString(query.value(1).toString(),"hh:mm:ss");
            sche.end=QTime::fromString(query.value(2).toString(),"hh:mm:ss");
            sche.name=query.value(3).toString();
            sche.id=query.value(4).toInt();
            s.append(sche);
        }
        str = QString("select * from task where teamID = '%1' and to_days(deadline) = '%2'").arg(user->getTeamid()).arg(date.toString("yyyy-MM-dd"));
        query.exec(str);
        while(query.numRowsAffected() != 0)
        {
            query.next();
            Schedule sche;
            sche.state=2;
            sche.id=query.value(0).toInt();
            QDateTime t=QDateTime::fromString(query.value(2).toString(),"dd-MM-yyyy hh:mm:ss");
            sche.t=t.date();
            sche.end=t.time();
            sche.name=query.value(3).toString();
            s.append(sche);
        }
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
}

bool pSchedule::deleteSche(int index)
{
    int state=s[index].state;
    int id=s[index].id;

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str;
    if(state==0)
    {
        str = QString("delete from pSchedule where scheduleID = '%1'").arg(id);
    }else if(state==1)
    {
        str = QString("delete from tSchedule where scheduleID = '%1'").arg(id);
    }else{
        str = QString("delete from task where taskID = '%1'").arg(id);
    }
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    s.removeAt(index);
    db.close();
    return 1;
}

bool pSchedule::addSche(Schedule sc)
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
    int id;
    QString str;
    QString s1=sc.t.toString("yyyy-MM-dd");
    QString s2=sc.start.toString("hh:mm:ss");
    QString s3=sc.end.toString("hh:mm:ss");
    QString s4=sc.name;
    if(sc.state==0)
    {
        query.exec("select scheduleID from pSchedule");
        if(query.first()){
            query.last();
            id = query.value(4).toInt()+1;
        }
        else
            id = 1;
        str = QString("insert into pSchedule values('%1','%2','%3','%4','%5','%6')").arg(s1).arg(s2).arg(s3).arg(s4).arg(id).arg(user->getid()).arg(sc.isGrabed);
    }else if(sc.state==1)
    {
        query.exec("select tcheduleID from tSchedule");
        if(query.first()){
            query.last();
            id = query.value(4).toInt()+1;
        }
        else
            id = 1;
        str = QString("insert into tSchedule values('%1','%2','%3','%4','%5')").arg(s1).arg(s2).arg(s3).arg(s4).arg(id).arg(user->getTeamid());
    }else{
        query.exec("select taskID from task");
        if(query.first()){
            query.last();
            id = query.value(0).toInt()+1;
        }
        else
            id = 1;
        str = QString("insert into task values('%1','%2','%3','%4')").arg(id).arg(user->getTeamid()).arg(s1+" "+s3).arg(s4);
    }
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    s.append(sc);
    db.close();
    return 1;
}
