#ifndef PSCHEDULE_H
#define PSCHEDULE_H
#include<QList>
#include<QDate>
#include<QTime>
#include<team.h>
class Schedule{
    QDate t;
    int state;//0为个人，1为团队，2为团队任务
    QTime start;//若为团队任务，此项无意义
    QTime end;
    QString name;
    Schedule();
};//schedule日程,属于一个基本数据结构

class pSchedule
{//一天的某种日程
    QList<Schedule> sche;//其实是public类型的
public:
    //函数也封装读写数据库的过程
    pSchedule(bool person=0);//无参代表当天日程,此处person表示团队和个人的筛选
    pSchedule(QDate day,bool peron=0);//某天的日程
    bool deleteSche(int index);//删除某个日程
    bool addSche(Schedule s);//添加一个日程
};

#endif // PSCHEDULE_H
