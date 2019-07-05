#ifndef EDITTABLE4_H
#define EDITTABLE4_H

#include <QWidget>
#include <BaseWindow.h>
#include <QDate>
#include <QTime>
#include <pschedule.h>
#include <user.h>
namespace Ui {
class edittable4;
}

class edittable4 : public BaseWindow
{
    Q_OBJECT

public:
    explicit edittable4(QWidget *parent = 0);
    ~edittable4();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void get4(int m,int n);
signals:
    void taskedit(Schedule sche);
private:
    Ui::edittable4 *ui;
    void initTitleBar();
};

#endif // EDITTABLE4_H