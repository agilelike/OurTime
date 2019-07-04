#ifndef TEAM_H
#define TEAM_H
#include <QList>
#include <QString>
#include <qpair>
#include <QSqlQuery>
class Team
{
    int id;
    QString name;
    QList<QPair<int,int> > member;//成员、状态
public:
    Team();
    void updateTeam(int teamid);//重新获取对应team信息
    QList<QPair<int,int> > getMember();
    QString getTeamName();
};
extern Team *team;
#endif // TEAM_H
