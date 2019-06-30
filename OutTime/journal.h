﻿#ifndef JOURNAL_H
#define JOURNAL_H

#include <QDialog>
#include <QString>

//struct pSchedule{
//    int scheduleID;
//    QString scheduleName;
//    QString date;
//    QString startTime;
//    QString endTime;
//    int userID;
//}pSche;

namespace Ui {
class journal;
}

class journal : public QDialog
{
    Q_OBJECT

public:
    explicit journal(QWidget *parent = 0);
    ~journal();

private slots:

    void on_reduceYear_clicked();

    void on_increaseYear_clicked();

    void on_reduceMonth_clicked();

    void on_increaseMonth_clicked();

    void on_reduceDay_clicked();

    void on_increaseDay_clicked();

private:
    Ui::journal *ui;
    void getpSchedule();
};

#endif // JOURNAL_H
