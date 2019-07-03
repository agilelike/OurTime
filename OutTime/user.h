#ifndef USER_H
#define USER_H

#include <QObject>

class User
{
public:
    User();
    int userID;
};

extern User* user;

#endif // USER_H
