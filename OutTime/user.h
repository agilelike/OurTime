#ifndef USER_H
#define USER_H
#include <QString>
#include <team.h>
#include <message.h>
#include <QSqlQuery>
#include <pschedule.h>
class User
{//user作为主函数中的全局变量，只有一个
private:
    int state;//登录状态标识,0表示未登录
    int id;//userid
    QString name;
    int teamState;
    int teamid;
public:
    QList<pSchedule *> psche;
    QList<pSchedule *> tsche;
public:
    User();
    bool login(QString _name,QString pwd);
    int signup(QString name,QString pwd);
    void freshSchedule();
    void logout();
    int getState();
    int getid();
    QString getName();
    int getTeamState();
    int getTeamid();
    bool setTeamid(int);
    bool setTeamState(int);
    bool setAllTeamid(int);
    bool setAllTeamState(int);


    bool createTeam(QString name);
    bool applyToTeam(int teamid);
    bool dismissTeam();
    bool exitTeam();


    bool sendMessage(int toID,QString context);
    void updateMessage(Message *);
};
extern User *user;
#endif // USER_H
