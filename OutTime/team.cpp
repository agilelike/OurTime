#include "team.h"
#include <QTextStream>
#include <stdio.h>

Team *team;
Team::Team()
{

}
void Team::updateTeam(int teamid)//重新获取对应team信息
{
    id = teamid;
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
    query.next();
    name=query.value(0).toString();
    member.clear();
    str = QString("select * from user where teamID='%1'").arg(id);
    query.exec(str);
    while(query.next())
    {
        tmp = QPair<int,int>(query.value(0).toInt(),query.value(4).toInt());
        member.append(tmp);
        //QTextStream cout(stdout,  QIODevice::WriteOnly);
        //cout<<tmp.first<<tmp.second<<endl;
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
}

QList<QPair<int,int> > Team::getMember(){
    return member;
}

QString Team::getTeamName(){
    return name;
}
