#include "mainwindow.h"
#include <QApplication>
#include <journal.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    journal j;
    j.show();

    return a.exec();
}
