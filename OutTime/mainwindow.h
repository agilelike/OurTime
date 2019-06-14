#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <BaseWindow.h>
#include <timetable.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void initTitleBar();
    Ui::MainWindow *ui;
    TimeTable *t;
};

#endif // MAINWINDOW_H
