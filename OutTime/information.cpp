#include "information.h"
#include "ui_information.h"
#include <stdio.h>
#include <QTextStream>
#include <user.h>

information::information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

information::~information()
{
    delete ui;
}

void information::on_pushButton_clicked()
{

    this->hide();
    if(user->getState() == 0){
        emit showLogin();
        emit hideMain();
        return;
    }
    emit showPersonalDetails();
}

void information::receivePersonalDetails()
{
    this->create = create;

    if(user->getState() == 0){
        ui->label->hide();
        ui->label_2->show();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
    }
    else if(user->getTeamState() == 2){
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_4->setText(QString::number(user->getTeamid()));
        ui->label_5->show();
    }
    else{
        if(user->getTeamState() == 3){
            ui->label->show();
            ui->label_2->hide();
            ui->label_3->hide();
            ui->label_4->hide();
            ui->label_5->hide();
        }
        else{
            ui->label->hide();
            ui->label_2->show();
            ui->label_3->hide();
            ui->label_4->hide();
            ui->label_5->hide();
        }
    }
}

