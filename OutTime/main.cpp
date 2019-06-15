#include "mainwindow.h"
#include <QApplication>
#include"login.h"
#include"signup.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login L;
    signup Sign;
    QObject::connect(&L,SIGNAL(showsignup()),&Sign,SLOT(receivelogin()));
    w.show();
    //L.show();
    return a.exec();
}
