#include "message.h"
#include<QString>
#include<QDate>
#include<QTime>
Message::Message(int fromID,int toID,QString context,QDate date,QTime time)
{
    this->context=context;
    this->date=date;
    this->fromID=fromID;
    this->toID=toID;
    this->time=time;
}

int Message::getfromid()
{

}
