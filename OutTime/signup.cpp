#include "signup.h"
#include "ui_signup.h"
#include <stdio.h>
#include <QTextStream>

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
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("root");
    db.setPassword("CBBc116b.");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str1,str2;
    str1 = ui->lineEdit->text();
    str2 = ui->lineEdit_2->text();
    int id;
    query.exec("select userID from user");
    if(query.first()){
        query.last();
        id = query.value(0).toInt()+1;
    }
    else
        id = 1;
    QString str = QString("insert into user values('%1','%2',NULL,'%3',0)").arg(id).arg(str1).arg(str2);
    query.exec(str);
    query.exec("SET NAMES 'UTF8'");
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    db.close();
    this->hide();
    emit showLogin();
}

void signup::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    emit showLogin();
}
