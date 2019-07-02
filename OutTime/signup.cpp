#include "signup.h"
#include "ui_signup.h"
#include <stdio.h>
#include <QTextStream>
#include <user.h>

signup::signup(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::signup)
{
    initTitleBar();
    ui->setupUi(this);
    ui->label_5->hide();
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
    QString str1,str2,str3;
    str1 = ui->lineEdit->text();
    str2 = ui->lineEdit_2->text();
    str3 = ui->lineEdit_3->text();
    if(!str1.isEmpty() && !str2.isEmpty() && !str3.isEmpty() && str2 == str3){
        int id = user->signup(str1,str2);
        ui->label_5->hide();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        this->hide();
        emit showID(id);
    }
    else{
        ui->label_5->show();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
    }
}

void signup::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    this->hide();
    emit showLogin();
}
