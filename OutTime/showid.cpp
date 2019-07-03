#include "showid.h"
#include "ui_showid.h"

showID::showID(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showID)
{
    ui->setupUi(this);
}

showID::~showID()
{
    delete ui;
}

void showID::receiveShowID(int id){
    ui->label->setText(QString::number(id));
    this->show();
}

void showID::on_pushButton_clicked()
{
    this->hide();
    emit showLogin();
}
