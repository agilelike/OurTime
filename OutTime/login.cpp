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

    db.setHostName("localhost");      //如果填入localhost,则表示链接本地的数据库
    db.setDatabaseName("ourtime");       //要连接的数据库名
    db.setUserName("root");
    db.setPassword("CBBc116b.");
    db.setPort(3306);
    db.open();

    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userID from user where userName = '%1' and password = '%2'").arg(str1).arg(str2);
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
