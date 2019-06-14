#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"teaminfor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    teaminfor *w_teaminfor;
};

#endif // MAINWINDOW_H
