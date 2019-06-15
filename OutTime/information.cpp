#include "information.h"
#include "ui_information.h"

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
    emit showPersonalDetails(!team);
}

void information::receivePersonalDetails(bool team)
{
    this->team = team;
    if(!team){
        ui->label_2->hide();
        ui->label->show();
    }
    else{
        ui->label->hide();
        ui->label_2->show();
    }
}

