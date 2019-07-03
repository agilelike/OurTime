#include "mainwindow.h"
#include "desktop.h"
#include <QApplication>
#include"login.h"
#include"signup.h"
#include <journal.h>
#include <user.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;

    user = new User();

    login L;
    signup Sign;
    QObject::connect(&L,SIGNAL(showsignup()),&Sign,SLOT(receivelogin()));
    Desktop w;

    HWND desktopHwnd = w.findDesktopIconWnd();
    if(desktopHwnd) SetParent((HWND)w.winId(), desktopHwnd);
    w.show();
    //L.show();

    return a.exec();
}
