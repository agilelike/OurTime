#ifndef EDITTABLE2_H
#define EDITTABLE2_H

#include <QWidget>
#include <BaseWindow.h>
#include <QDate>
#include <QTime>
#include <pschedule.h>
namespace Ui {
class edittable2;
}

class edittable2 : public BaseWindow
{
    Q_OBJECT

public:
    explicit edittable2(QWidget *parent = 0);
    ~edittable2();
public slots:
    void makeEdit();
signals:
    void taskcontent(Schedule sche);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::edittable2 *ui;
    void initTitleBar();
};

#endif // EDITTABLE2_H
