#ifndef MESSAGE_H
#define MESSAGE_H
#include<QString>
#include<QDate>
#include<QTime>
class Message
{
    int fromID;
    int toID;
    QString context;
    QDate date;
    QTime time;//消息精确到秒
    bool flagPop;//是否已经弹窗

public:
    Message();
};

#endif // MESSAGE_H
