#include "timetable.h"
#include "ui_timetable.h"

TimeTable::TimeTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeTable)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    et = new editTable();
    connect(ui->pushButton,SIGNAL(clicked()),et,SLOT(makeEdit()));
    et2 = new edittable2();
    connect(ui->pushButton_4,SIGNAL(clicked()),et2,SLOT(makeEdit()));
    ui->pushButton_4->hide();
}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::on_commandLinkButton_clicked()
{
    ui->label->setStyleSheet("border-image: url(:/image/personaltable.png);");
    ui->pushButton_4->hide();
}

void TimeTable::on_commandLinkButton_2_clicked()
{
    ui->label->setStyleSheet("border-image: url(:/image/teamtable.png);");
    ui->pushButton_4->show();
}
