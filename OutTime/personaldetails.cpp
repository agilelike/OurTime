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
    ui->tableWidget->setColumnWidth(0,90);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList header1;
    header1<<"身份"<<"姓名";
    ui->tableWidget->setHorizontalHeaderLabels(header1);
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

    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setRowCount(2);
    ui->tableWidget_2->setColumnCount(2);
    ui->tableWidget_2->setColumnWidth(0,90);
    ui->tableWidget_2->setColumnWidth(1,115);
    QStringList header2;
    header2<<"账号"<<"姓名";
    ui->tableWidget_2->setHorizontalHeaderLabels(header2);
    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem("1111"));
    ui->tableWidget_2->setItem(0,1,new QTableWidgetItem("储成伟"));
    ui->tableWidget_2->setItem(1,0,new QTableWidgetItem("2222"));
    ui->tableWidget_2->setItem(1,1,new QTableWidgetItem("安宇"));
    int c = ui->tableWidget->rowCount();
    int d = ui->tableWidget->columnCount();
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    haveTeam(state);
}

void personalDetails::haveTeam(int state)
{
    switch (state) {
    case 0:
        ui->lineEdit->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->show();
        ui->pushButton_4->show();
        ui->tableWidget->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->textBrowser->hide();
        ui->pushButton_2->hide();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    case 1:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->textBrowser->show();
        ui->pushButton_2->show();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    case 2:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->textBrowser->show();
        ui->pushButton_2->show();
        ui->pushButton_5->show();
        ui->label_18->show();
        ui->tableWidget_2->show();
        ui->pushButton_6->show();
        ui->pushButton_7->show();
        break;
    case 3:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->show();
        ui->label_17->show();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->textBrowser->hide();
        ui->pushButton_2->hide();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    default:
        break;
    }
}

personalDetails::~personalDetails()
{
    delete ui;
}

void personalDetails::on_pushButton_3_clicked()
{
    emit showInformation(state,false);
}

void personalDetails::on_pushButton_2_clicked()
{
    emit showInformation(state,false);
}

void personalDetails::on_pushButton_4_clicked()
{
    emit showCreateTeam(state);
}

void personalDetails::on_pushButton_6_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget->item(row1,1)->text();
        ui->tableWidget_2->removeRow(row1);
        int row2 = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row2);
        ui->tableWidget->setItem(row2,0,new QTableWidgetItem("组员"));
        ui->tableWidget->setItem(row2,1,new QTableWidgetItem(str));
        ui->tableWidget->item(row2,0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->tableWidget->item(row2,1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}

void personalDetails::on_pushButton_7_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget->item(row1,1)->text();
        ui->tableWidget_2->removeRow(row1);
    }
}

void personalDetails::on_pushButton_5_clicked()
{
    emit showInformation(state,0);
}

void personalDetails::on_pushButton_clicked()
{
    emit showInformation(state,2);
}
