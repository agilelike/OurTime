#include "personaldetails.h"
#include "ui_personaldetails.h"
#include <QDebug>

personalDetails::personalDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalDetails)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0,80);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList header;
    header<<"身份"<<"姓名";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("组长"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("储成伟"));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("安宇"));
    ui->tableWidget->setItem(2,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(2,1,new QTableWidgetItem("陈镔滨"));
    ui->tableWidget->setItem(3,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(3,1,new QTableWidgetItem("刘晟驰"));
    ui->tableWidget->setItem(4,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(4,1,new QTableWidgetItem("汪江君"));
    int a = ui->tableWidget->rowCount();
    int b = ui->tableWidget->columnCount();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    haveTeam(team);
}

void personalDetails::haveTeam(bool team)
{
    if(team){
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->pushButton_3->hide();
        ui->tableWidget->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->textBrowser->show();
        ui->pushButton_2->show();
    }
    else{
        ui->lineEdit->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->pushButton_3->show();
        ui->tableWidget->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->textBrowser->hide();
        ui->pushButton_2->hide();
    }
}

personalDetails::~personalDetails()
{
    delete ui;
}

void personalDetails::on_pushButton_3_clicked()
{
    emit showInformation(team);
}

void personalDetails::on_pushButton_2_clicked()
{
    emit showInformation(team);
}
