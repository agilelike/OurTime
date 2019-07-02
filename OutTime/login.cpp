#include "login.h"
#include "ui_login.h"
#include <stdio.h>
#include <QTextStream>

login::login(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::login)
{
    initTitleBar();
    ui->setupUi(this);
    ui->label_4->hide();
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    this->hide();
    emit showsignup();
}

void login::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}

void login::receiveShowLogin(){
    this->show();
}


void login::on_pushButton_clicked()
{
    QString str1 = ui->lineEdit->text();
    QString str2 = ui->lineEdit_2->text();
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("root");
    db.setPassword("e!-gtsIpb1N7");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userID from user where userID = '%1' and password = '%2'").arg(str1.toInt()).arg(str2);
    query.exec(str);
    if(query.first()){
        emit showMainwindow();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->label_4->hide();
        this->hide();
    }
    else{
        ui->lineEdit_2->clear();
        ui->label_4->show();
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
}
