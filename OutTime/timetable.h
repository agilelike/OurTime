#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>
#include <BaseWindow.h>
namespace Ui {
class TimeTable;
}

class TimeTable : public BaseWindow
{
    Q_OBJECT

public:
    explicit TimeTable(QWidget *parent = 0);
    ~TimeTable();

private:
    void initTitleBar();
    Ui::TimeTable *ui;
};

#endif // TIMETABLE_H
