#ifndef PSCHEDULE_H
#define PSCHEDULE_H
#include<QList>
#include<QDate>
#include<QTime>
#include<user.h>
#include <QSqlQuery>
class Schedule{
public:
    QDate t;
    int state;//0为个人，1为团队，2为团队任务
    QTime start;//若为团队任务，此项无意义
    QTime end;
    QString name;
    int isGrabed;//若非个人日程，此项无意义
    int id;//方便删除
    Schedule();
};//schedule日程,属于一个基本数据结构

class pSchedule
{//一天的某种日程
public:
    QList<Schedule> s;//其实是public类型的
public:
    //函数也封装读写数据库的过程
    pSchedule(bool person=0);//无参代表当天日程,此处person表示团队和个人的筛选
    pSchedule(QDate day,bool person=0);//某天的日程
    bool deleteSche(int index);//删除某个日程
    bool addSche(Schedule sc);//添加一个日程

    //传入的开始结束时间的数组在里面被赋值
    static void startend(QList<QTime*> _start,QList<QTime*> _end,QDate day,bool person=0);
};

#endif // PSCHEDULE_H
