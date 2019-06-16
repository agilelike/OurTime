#ifndef EDITTABLE_H
#define EDITTABLE_H

#include <QWidget>
#include <BaseWindow.h>
namespace Ui {
class editTable;
}

class editTable : public BaseWindow
{
    Q_OBJECT

public:
    explicit editTable(QWidget *parent = 0);
    ~editTable();
public slots:
    void makeEdit();
private:
    Ui::editTable *ui;
    void initTitleBar();
};

#endif // EDITTABLE_H
