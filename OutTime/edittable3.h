#ifndef EDITTABLE3_H
#define EDITTABLE3_H

#include <QWidget>
#include <BaseWindow.h>
#include <QDate>
#include <QTime>
#include <pschedule.h>
namespace Ui {
class edittable3;
}

class edittable3 : public BaseWindow
{
    Q_OBJECT

public:
    explicit edittable3(QWidget *parent = 0);
    ~edittable3();
signals:
    void editContent(Schedule sche);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::edittable3 *ui;
    void initTitleBar();
};

#endif // EDITTABLE3_H
