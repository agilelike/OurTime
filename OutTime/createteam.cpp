#include "createteam.h"
#include "ui_createteam.h"

createTeam::createTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createTeam)
{
    ui->setupUi(this);
}

createTeam::~createTeam()
{
    delete ui;
}

void createTeam::on_pushButton_3_clicked()
{
    emit showInformation(state,true);
    this->hide();
}
