#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QWidget>
#include <edittable.h>
namespace Ui {
class TimeTable;
}

class TimeTable : public QWidget
{
    Q_OBJECT

public:
    explicit TimeTable(QWidget *parent = 0);
    ~TimeTable();
private slots:
    void on_commandLinkButton_clicked();
    void on_commandLinkButton_2_clicked();

private:
    Ui::TimeTable *ui;
    editTable *et;
};

#endif // TIMETABLE_H
