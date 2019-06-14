#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>
namespace Ui {
class TimeTable;
}

class TimeTable : public QWidget
{
    Q_OBJECT

public:
    explicit TimeTable(QWidget *parent = 0);
    ~TimeTable();

private:
    Ui::TimeTable *ui;
};

#endif // TIMETABLE_H
