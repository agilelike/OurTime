#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QObject::connect(w_personalDetails,SIGNAL(showInformation(bool)),this,SLOT(receivePersonalDetails(bool)));
    QObject::connect(w_information,SIGNAL(showPersonalDetails(bool)),this,SLOT(receiveInformation(bool)));
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
    w_personalDetails->show();
}

void MainWindow::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}

void MainWindow::receiveInformation(bool team)
{
    w_personalDetails->team = team;
    w_personalDetails->haveTeam(team);
    currentInterfaceHide();
    w_personalDetails->show();
}

void MainWindow::receivePersonalDetails(bool team)
{
    w_information->team = team;
    w_information->receivePersonalDetails(team);
    currentInterfaceHide();
    w_information->show();
}
