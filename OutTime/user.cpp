#include "user.h"
User *user;
User::User()
{
    state=0;

}
bool User::login(int id,QString pwd)
{

}

void User::logout()
{

}

int User::getid()
{
    return id;
}

int User::getName()
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

bool User::setTeamid(int)
{
    //数据库操作
}

bool User::setTeamState(int);


bool User::createTeam();
bool User::applyToTeam(int teamid);
bool User::dismissTeam();
