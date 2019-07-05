#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <journal.h>
#include <personaldetails.h>
#include <information.h>
#include <BaseWindow.h>
#include"teaminfo.h"
#include <timetable.h>
#include <createteam.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void currentInterfaceHide();
    information* getInformation();
    ~MainWindow();
    teaminfo * getTeamInfo();

private slots:
    void on_commandLinkButton_clicked();
    void on_commandLinkButton_2_clicked();
    void on_commandLinkButton_3_clicked();
    void on_commandLinkButton_4_clicked();
    void receiveShowPersonalDetails();
    void receiveShowInformation();
    void receiveShowCreateTeam();
    void receiveShowMainwindow();
    void receiveHideMain();


protected:
    void closeEvent(QCloseEvent *event);
private:
    void initTitleBar();
    Ui::MainWindow *ui;
    int flag = 1;
    teaminfo *w_teaminfo;
    journal* w_journal;
    personalDetails* w_personalDetails;
    information* w_information;
    TimeTable *t;
    createTeam *w_createTeam;
};

#endif // MAINWINDOW_H
