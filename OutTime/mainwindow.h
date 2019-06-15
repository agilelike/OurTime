#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <journal.h>
#include <personaldetails.h>

#include <BaseWindow.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void currentInterfaceHide();
    ~MainWindow();

private slots:
    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_4_clicked();

private:
    void initTitleBar();
    Ui::MainWindow *ui;

    int flag = 1;
    journal* w_journal;
    personalDetails* w_personalDetails;
};

#endif // MAINWINDOW_H
