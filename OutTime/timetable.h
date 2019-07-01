#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>
#include <edittable.h>
#include <edittable2.h>
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

    void on_pushButton_2_clicked();
    void getcontent1(QDate date,QString content,QTime bt,QTime et,bool checked);

    void clickevent();


private:
    Ui::TimeTable *ui;
    editTable *et1;
    edittable2 *et2;
    QList<QPushButton *>btn[7];
//    QList<QPushButton *>btn1;
//    QList<QPushButton *>btn2;
//    QList<QPushButton *>btn3;
//    QList<QPushButton *>btn4;
//    QList<QPushButton *>btn5;
//    QList<QPushButton *>btn6;
//    QList<QPushButton *>btn7;

};

#endif // TIMETABLE_H
