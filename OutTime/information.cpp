#include "information.h"
#include "ui_information.h"
#include <QDebug>

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
    if(state == 0){
        if(create) state = 2;
        else state = 3;
    }
    else if(state == 3);
    else state = 0;
    emit showPersonalDetails(state);
}

void information::receivePersonalDetails(int state,bool create)
{
    this->state = state;
    this->create = create;
    if(create){
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
    }
    else{
        if(state == 0){
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

