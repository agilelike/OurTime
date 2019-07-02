#include "createteam.h"
#include "ui_createteam.h"
#include <user.h>

createTeam::createTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createTeam)
{
    ui->setupUi(this);
    ui->label_14->hide();
}

createTeam::~createTeam()
{
    delete ui;
}

void createTeam::on_pushButton_3_clicked()
{
    QString str = ui->lineEdit->text();
    if(!ui->lineEdit->text().isEmpty()){
        ui->label_14->hide();
        if(user->createTeam(str)){
            ui->lineEdit->clear();
            emit showInformation();
            this->hide();
        }
    }
    else ui->label_14->show();
}

void createTeam::on_pushButton_clicked()
{
    emit showPersonalDetails();
    this->hide();
}
