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
}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::on_commandLinkButton_clicked()
{
    ui->label->setStyleSheet("border-image: url(:/image/personaltable.png);");
}

void TimeTable::on_commandLinkButton_2_clicked()
{
    ui->label->setStyleSheet("border-image: url(:/image/teamtable.png);");
}
