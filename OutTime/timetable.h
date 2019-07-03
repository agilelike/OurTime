#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>
#include <pschedule.h>
#include <edittable.h>
#include <edittable2.h>
#include <edittable3.h>
#include <edittable4.h>
#include <pschedule.h>
namespace Ui {
class TimeTable;
}

class TimeTable : public QWidget
{
    Q_OBJECT

public:
    explicit TimeTable(QWidget *parent = 0);
    ~TimeTable();
private slots:
    void on_commandLinkButton_clicked();
    void on_commandLinkButton_2_clicked();


    void getcontent1(Schedule sche);
    void getcontent2(Schedule sche);
    void gettask(Schedule sche);

    void clickevent();
    void editSchedule();
    void delSchedule();



    void on_pushButton_clicked();

signals:
    void passflag(bool f);
private:
    Ui::TimeTable *ui;
    editTable *et1;
    edittable2 *et2;
    edittable3 *et3;
    QList<QPushButton *>btn[7];
    //菜单与动作
    QList<QAction *>editAct[7];
    QList<QAction *>delAct[7];

    //只能用该变量来暂存值
    int m;
    int n;
    //用一个变量来代表应当刷新哪个页面(true代表个人日程，false代表团队日程)
    bool flag;

};

#endif // TIMETABLE_H
