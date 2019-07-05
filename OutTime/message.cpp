#include "message.h"
#include<QString>
#include<QDate>
#include <QSqlQuery>
#include<QTime>
Message::Message(int fromID,int toID,QString context,QDate date,QTime time)
{
    this->context=context;
    this->date=date;
    this->fromID=fromID;
    this->toID=toID;
    this->time=time;
}

int Message::getFromid()
{
   return this->fromID;
}

int Message::getToid()
{
    return this->toID;
}

QString Message::getContext()
{
    return this->context;
}

QDate Message::getDate()
{
    return this->date;
}
