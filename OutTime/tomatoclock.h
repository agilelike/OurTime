#ifndef TOMATOCLOCK_H
#define TOMATOCLOCK_H

#include <QDialog>
#include <QString>

namespace Ui {
class tomatoClock;
}

class tomatoClock : public QDialog
{
    Q_OBJECT

public:
    explicit tomatoClock(QWidget *parent = 0 ,QString currentTask = "" ,int tomatoNumber = 0);
    void paintEvent(QPaintEvent *);
    ~tomatoClock();

private slots:
    void clockUpdata();

private:
    Ui::tomatoClock *ui;
    int tomato_number;

    int current_min;
    int current_sec;
};

#endif // TOMATOCLOCK_H
