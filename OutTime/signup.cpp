#include "signup.h"
#include "ui_signup.h"
#include <QStringList>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

signup::signup(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::signup)
{
    initTitleBar();
    ui->setupUi(this);
}

void signup::receivelogin()
{
    this->show();
}


signup::~signup()
{
    delete ui;
}

void signup::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}


void signup::on_pushButton_clicked()
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("abcd");       //要连接的数据库名
    db.setUserName("root");
    db.setPassword("CBBc116b.");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    query.exec("insert into A values(5,'是',1)");
    query.exec("SET NAMES 'UTF8'");
}
