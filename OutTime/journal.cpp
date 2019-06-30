#include "journal.h"
#include "ui_journal.h"
#include <QDebug>

journal::journal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::journal)
{
    ui->setupUi(this);
    ui->ScheduleView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ScheduleView->setFocusPolicy(Qt::NoFocus);
    //ui->tableWidget->setStyleSheet("QTableWidget::item:selected { background-color: rgb(255,255,255) }");
    ui->ScheduleView->setRowCount(10);
    ui->ScheduleView->setColumnCount(3);
    QStringList header;
    header<<"事件"<<"起始时间"<<"结束时间";
    ui->ScheduleView->setHorizontalHeaderLabels(header);
    ui->ScheduleView->setColumnWidth(0,380);
    for(int i=1;i<3;i++){
        ui->ScheduleView->setColumnWidth(i,100);
    }
    ui->year->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->month->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->day->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->ScheduleView->setItem(0,0,new QTableWidgetItem("上课"));
    ui->ScheduleView->setItem(0,1,new QTableWidgetItem("08:00"));
    ui->ScheduleView->setItem(0,2,new QTableWidgetItem("10:00"));
    ui->ScheduleView->setItem(1,0,new QTableWidgetItem("吃饭"));
    ui->ScheduleView->setItem(1,1,new QTableWidgetItem("11:50"));
    ui->ScheduleView->setItem(1,2,new QTableWidgetItem("12:30"));
    ui->ScheduleView->setItem(2,0,new QTableWidgetItem("上课"));
    ui->ScheduleView->setItem(2,1,new QTableWidgetItem("14:00"));
    ui->ScheduleView->setItem(2,2,new QTableWidgetItem("16:00"));
    ui->ScheduleView->setItem(3,0,new QTableWidgetItem("自习"));
    ui->ScheduleView->setItem(3,1,new QTableWidgetItem("18:30"));
    ui->ScheduleView->setItem(3,2,new QTableWidgetItem("21:15"));
    int a = ui->ScheduleView->rowCount();
    int b = ui->ScheduleView->columnCount();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            ui->ScheduleView->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    this->setParent(parent);
}

journal::~journal()
{
    delete ui;
}

void journal::getpSchedule()
{
    QString current_date;
    current_date.sprintf("%s-%s-%s" ,ui->year->text() ,ui->month->text() ,ui->day->text());
}

void journal::on_reduceYear_clicked()
{
    ui->year->setText(QString::number(ui->year->text().toInt()-1));
    ui->month->setText("01");
    ui->day->setText("01");
}

void journal::on_increaseYear_clicked()
{
    ui->year->setText(QString::number(ui->year->text().toInt()+1));
    ui->month->setText("01");
    ui->day->setText("01");
}

void journal::on_reduceMonth_clicked()
{
    int a;
    QString str;
    a = ui->month->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->month->setText(str);
    }
    ui->day->setText("01");
}


void journal::on_increaseMonth_clicked()
{
    int a;
    QString str;
    a = ui->month->text().toInt();
    if(a<12){
        if(a>8){
            str = QString::number(a+1);
        }
        else{
            str = "0" + QString::number(a+1);
        }
        ui->month->setText(str);
    }
    ui->day->setText("01");
}


void journal::on_reduceDay_clicked()
{
    int a;
    QString str;
    a = ui->day->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->day->setText(str);
    }
}

void journal::on_increaseDay_clicked()
{
    int array1[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int array2[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int a = ui->year->text().toInt();
    int b = ui->month->text().toInt();
    int c,d;
    QString str;
    if(!a%4||!a%100){
        if(a%400)
            c = array1[b-1];
        else c = array2[b-1];
    }
    else c = array2[b-1];
    d = ui->day->text().toInt();
    if(d<c){
        if(d>8){
            str = QString::number(d+1);
        }
        else{
            str = "0" + QString::number(d+1);
        }
        ui->day->setText(str);
    }
}
