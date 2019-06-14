#include "mainwindow.h"
#include <QApplication>
#include <journal.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //journal j;
    w.show();

    return a.exec();
}
