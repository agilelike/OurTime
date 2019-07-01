#include "pschedule.h"
Schedule::Schedule()
{

}

pSchedule::pSchedule(bool person)
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("root");
    db.setPassword("e!-gtsIpb1N7");
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
            sche.isGrabed=query.value(6).Int;
            s.append(sche);
        }

    }
    else if(person==1)
    {

    }
    db.close();
}
pSchedule::pSchedule(QDate day,bool person)
{

}

bool pSchedule::deleteSche(int index)
{
    return 1;
}

bool pSchedule::addSche(Schedule s)
{
    return 1;
}
