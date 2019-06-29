#ifndef TEAM_H
#define TEAM_H
#include <user.h>
#include <QList>
#include <QString>
#include <qpair>
class Team
{
    int id;
    QString name;
    QList<QPair<QString,int>> member;//成员、状态
public:
    Team();
    void updateTeam();//重新获取对应team信息
    bool createTeam();
    bool applyToTeam(int teamid);
    bool dismissTeam();
};

#endif // TEAM_H
