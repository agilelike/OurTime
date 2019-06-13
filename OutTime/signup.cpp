#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
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
