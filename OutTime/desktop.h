#ifndef DESKTOP_H
#define DESKTOP_H
#include<windows.h>
#include <QWidget>
#include <QSystemTrayIcon>
#include <QMenu>
#include <tomatoclock.h>

namespace Ui {
class Desktop;
}

class Desktop : public QWidget
{
    Q_OBJECT

public:
    explicit Desktop(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~Desktop();
    HWND findDesktopIconWnd();


private slots:
    void on_Button1_clicked();
    void on_Button2_clicked();
    void timeUpdate();
    void messagetip();

    void on_start_tomato_clicked();

private:
    Ui::Desktop *ui;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;

    //窗口管理
    QAction *minAction;
    QAction *restoreAction;
    QAction *quitAction;

    //番茄钟
    tomatoClock* tomatoClo = 0;
};
extern int mesnum;
#endif // DESKTOP_H
