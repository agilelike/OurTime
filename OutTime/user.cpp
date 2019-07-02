#include "user.h"
#include "message.h"
User *user;
User::User()
{
    state=0;

}
int User::getid()
{

}

bool User::sendMessage(int toID, QString context)
{

    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    Message* m1= new Message(user->getid(),toID,context,date,time);
    //m1存入数据库
}

int User::messagenum()
{
    return 10;
}
