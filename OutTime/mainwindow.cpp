#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<user.h>

MainWindow::MainWindow(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::MainWindow)
{

    initTitleBar();
    ui->setupUi(this);
    w_personalDetails = new personalDetails(this);
    w_personalDetails->move(0,120);
    w_journal = new journal(this);
    w_journal->move(0,120);
    w_information = new information(this);
    w_information->move(400,160);
    w_createTeam = new createTeam(this);
    w_createTeam->move(0,120);
    w_createTeam->hide();
    QObject::connect(w_personalDetails,SIGNAL(showInformation()),this,SLOT(receiveShowInformation()));
    QObject::connect(w_information,SIGNAL(showPersonalDetails()),this,SLOT(receiveShowPersonalDetails()));
    QObject::connect(w_personalDetails,SIGNAL(showCreateTeam()),this,SLOT(receiveShowCreateTeam()));
    QObject::connect(w_createTeam,SIGNAL(showInformation()),this,SLOT(receiveShowInformation()));
    QObject::connect(w_information,SIGNAL(hideMain()),this,SLOT(receiveHideMain()));
    QObject::connect(w_createTeam,SIGNAL(showPersonalDetails()),this,SLOT(receiveShowPersonalDetails()));
    w_teaminfo = new teaminfo(this);
    w_teaminfo->move(0,130);
    t=new TimeTable(this);
    t->move(0,120);
    flag=1;
    w_teaminfo->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::currentInterfaceHide()
{
    switch (flag) {
    case 1:
        w_teaminfo->hide();
        break;
    case 2:
        t->hide();
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

void MainWindow::on_commandLinkButton_clicked()
{
    currentInterfaceHide();
    flag = 1;
    w_teaminfo->show();
}

void MainWindow::on_commandLinkButton_2_clicked()
{
    currentInterfaceHide();
    flag = 2;
    t->show();
}

void MainWindow::on_commandLinkButton_3_clicked()
{
    currentInterfaceHide();
    flag = 3;
    w_journal->show();
}

void MainWindow::on_commandLinkButton_4_clicked()
{
    currentInterfaceHide();
    flag = 4;
    w_personalDetails->update();
    w_personalDetails->showMember();
    w_personalDetails->hideLabel19();
    w_personalDetails->showTotal();
    w_personalDetails->PaintImage1();
    w_personalDetails->PaintImage2();
    w_personalDetails->show();
}

void MainWindow::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}

void MainWindow::receiveShowPersonalDetails()
{
    w_personalDetails->haveTeam();
    w_personalDetails->hideLabel19();
    currentInterfaceHide();
    w_personalDetails->show();
}

void MainWindow::receiveShowInformation()
{
    w_information->receivePersonalDetails();
    currentInterfaceHide();
    w_information->show();
}

void MainWindow::receiveShowCreateTeam(){
    currentInterfaceHide();
    w_createTeam->show();
}

void MainWindow::receiveShowMainwindow(){
    flag = 1;
    w_teaminfo->show();
    this->show();
}

information* MainWindow::getInformation(){
    return w_information;
}

void MainWindow::receiveHideMain(){
    this->hide();
}
