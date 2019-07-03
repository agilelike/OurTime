#ifndef EDITTABLE4_H
#define EDITTABLE4_H

#include <QWidget>
#include <BaseWindow.h>
#include <QDate>
#include <QTime>
#include <pschedule.h>

namespace Ui {
class edittable4;
}

class edittable4 : public QWidget
{
    Q_OBJECT

public:
    explicit edittable4(QWidget *parent = 0);
    ~edittable4();

private:
    Ui::edittable4 *ui;
};

#endif // EDITTABLE4_H
