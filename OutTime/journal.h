#ifndef JOURNAL_H
#define JOURNAL_H

#include <QDialog>
#include <QString>
#include <QDate>
namespace Ui {
class journal;
}

class journal : public QDialog
{
    Q_OBJECT
private:
    QDate date;
    QString journal;
    int clock;//当日番茄钟个数
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
};

#endif // JOURNAL_H
