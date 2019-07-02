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
    state=0;
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
void User::setState(int _state)
{
    state=_state;
}

bool User::setTeamid(int _id)
{
    //数据库操作

    return 1;
}

bool User::setTeamState(int _state)
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
