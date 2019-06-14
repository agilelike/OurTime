#include "teaminfor.h"
#include "ui_teaminfor.h"

teaminfor::teaminfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teaminfor)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    ui->setupUi(this);
}

teaminfor::~teaminfor()
{
    delete ui;
}
