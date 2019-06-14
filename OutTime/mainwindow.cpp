#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::MainWindow)
{
    initTitleBar();
    ui->setupUi(this);
    t=new TimeTable(this);
    t->move(0,120);
    t->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
