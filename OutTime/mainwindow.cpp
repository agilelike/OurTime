#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::currentInterfaceHide()
{
    switch (flag) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        w_journal->hide();
        break;
    case 4:
        w_personalDetails->hide();
        break;
    default:
        break;
    }
}

void MainWindow::on_commandLinkButton_3_clicked()
{
    w_journal = new journal(this);
    w_journal->move(0,120);
    currentInterfaceHide();
    flag = 3;
    w_journal->show();
}

void MainWindow::on_commandLinkButton_4_clicked()
{
    w_personalDetails = new personalDetails(this);
    w_personalDetails->move(0,120);
    currentInterfaceHide();
    flag = 4;
    w_personalDetails->show();
}
