#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    w_teaminfor = new teaminfor(this);
    w_teaminfor->move(0,130);
    w_teaminfor->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
