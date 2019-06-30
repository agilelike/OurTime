#ifndef JOURNAL_H
#define JOURNAL_H

#include <QDialog>
#include <QList>
#include <QString>

//typedef struct pSchedule{
//    int userID;
//    int pScheID;
//    QString date;
//    QString scheduleName;
//    QString startTime;
//    QString endTime;
//    int isGrabed;
//}pSche;

typedef struct pSchedule{
    QString scheduleName;
    QString startTime;
    QString endTime;
}pSche;

typedef struct User{
    int userID;
}user;

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
    void on_toolButton_clicked();
    void on_toolButton_2_clicked();
    void on_toolButton_4_clicked();
    void on_toolButton_3_clicked();
    void on_toolButton_6_clicked();
    void on_toolButton_5_clicked();

private:
    Ui::journal *ui;
    void showpSchedule();
    void getpSchedule(QList<pSche> & ,QString);
    void showJournal();
    void getJournal(QString &,QString &, int *);
};

#endif // JOURNAL_H
