#ifndef USER_H
#define USER_H
#include <QString>
#include <team.h>
#include <message.h>
#include <QSqlQuery>
class User
{//user作为主函数中的全局变量，只有一个
private:
    int state;//登录状态标识,0表示未登录
    int id;//userid
    QString name;
    int teamState;
    int teamid;
public:
    User();
    bool login(QString _name,QString pwd);
    void logout();
    int getState();
    int getid();
    QString getName();
    int getTeamState();
    int getTeamid();
    void setState(int);
    bool setTeamid(int);
    bool setTeamState(int);


    bool createTeam(QString);
    bool applyToTeam(int teamid);
    bool dismissTeam();


    bool sendMessage(int toID,QString context);
    void updateMessage(Message *);
};
extern User *user;
#endif // USER_H
