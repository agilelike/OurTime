#include "teaminfo.h"
#include "ui_teaminfo.h"

teaminfo::teaminfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    ui->setupUi(this);
}

teaminfo::~teaminfo()
{
    delete ui;
}
