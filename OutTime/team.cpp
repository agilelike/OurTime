#include "team.h"
Team* team;
Team::Team()
{

}
void Team::updateTeam()//重新获取对应team信息
{
    QPair<int,int> tmp;
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select teamName from team where teamID='%1'").arg(id);
    query.exec(str);
    name=query.value(0).toString();
    member.clear();
    str = QString("select * from user where teamID='%1'").arg(id);
    query.exec(str);
    while(query.numRowsAffected() != 0)
    {
        query.next();
        QPair<int,int> q=QPair<int,int>(query.value(0).toInt(),query.value(4).toInt());
        member.append(q);
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
}

