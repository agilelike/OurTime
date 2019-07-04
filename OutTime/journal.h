#ifndef JOURNAL_H
#define JOURNAL_H

#include <QDialog>

#include <QString>
#include <QDate>
#include <QList>
#include <QString>
#include <QSqlDatabase>

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


namespace Ui {
class journal;
}

class journal : public QDialog
{
    Q_OBJECT

private:
    QDate date;
    QString context;
    int clock;//当日番茄钟个数


    //记录系统当前日期
    QString system_date;
    int journalID = 0;


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

    void on_pushButton_clicked();

private:
    Ui::journal *ui;
    //显示当日日程
    void showpSchedule();
    //得到当日日程
    void getpSchedule(QList<pSche> & ,QString);
    //显示日志
    void showJournal();
    //链接数据库
    void connectDB(QSqlDatabase &);
    //得到当前页面显示的日期
    QString getLabelDate();
};

#endif // JOURNAL_H
