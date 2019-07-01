#ifndef EDITTABLE_H
#define EDITTABLE_H

#include <QWidget>
#include <BaseWindow.h>
#include <QDate>
#include <QTime>

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
signals:
    void passcontent(QDate date,QString content,QTime bt,QTime et,bool checked);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editTable *ui;
    void initTitleBar();
};

#endif // EDITTABLE_H
