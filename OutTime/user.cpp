#include "user.h"
User *user;
User::User()
{
    state=0;

}
bool User::login(int id,QString pwd)
{
    return 1;
}

void User::logout()
{

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

bool User::setTeamid(int)
{
    //数据库操作
}

bool User::setTeamState(int)
{
    return 1;
}


bool User::createTeam()
{
    return 1;
}

bool User::applyToTeam(int teamid)
{
    return 1;
}

bool User::dismissTeam()
{
    return 1;
}
