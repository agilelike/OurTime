#include "journal.h"
#include "ui_journal.h"

journal::journal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::journal)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    //ui->tableWidget->setStyleSheet("QTableWidget::item:selected { background-color: rgb(255,255,255) }");
    ui->tableWidget->setRowCount(4);
    ui->tableWidget->setColumnCount(3);
    QStringList header;
    header<<"事件"<<"起始时间"<<"结束时间";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnWidth(0,380);
    for(int i=1;i<3;i++){
        ui->tableWidget->setColumnWidth(i,100);
    }
    ui->label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_2->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_3->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("上课"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("08:00"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("10:00"));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem("吃饭"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("11:50"));
    ui->tableWidget->setItem(1,2,new QTableWidgetItem("12:30"));
    ui->tableWidget->setItem(2,0,new QTableWidgetItem("上课"));
    ui->tableWidget->setItem(2,1,new QTableWidgetItem("14:00"));
    ui->tableWidget->setItem(2,2,new QTableWidgetItem("16:00"));
    ui->tableWidget->setItem(3,0,new QTableWidgetItem("自习"));
    ui->tableWidget->setItem(3,1,new QTableWidgetItem("18:30"));
    ui->tableWidget->setItem(3,2,new QTableWidgetItem("21:15"));
    int a = ui->tableWidget->rowCount();
    int b = ui->tableWidget->columnCount();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    this->setParent(parent);
}

journal::~journal()
{
    delete ui;
}

void journal::on_toolButton_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()-1));
    ui->label_3->setText("01");
}

void journal::on_toolButton_2_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()+1));
    ui->label_3->setText("01");
}

void journal::on_toolButton_4_clicked()
{
    int a;
    QString str;
    a = ui->label_2->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->label_2->setText(str);
    }
    ui->label_3->setText("01");
}

void journal::on_toolButton_3_clicked()
{
    int a;
    QString str;
    a = ui->label_2->text().toInt();
    if(a<12){
        if(a>8){
            str = QString::number(a+1);
        }
        else{
            str = "0" + QString::number(a+1);
        }
        ui->label_2->setText(str);
    }
    ui->label_3->setText("01");
}

void journal::on_toolButton_6_clicked()
{
    int a;
    QString str;
    a = ui->label_3->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->label_3->setText(str);
    }
}

void journal::on_toolButton_5_clicked()
{
    int array1[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int array2[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int a = ui->label->text().toInt();
    int b = ui->label_2->text().toInt();
    int c,d;
    QString str;
    if(!a%4||!a%100){
        if(a%400)
            c = array1[b-1];
        else c = array2[b-1];
    }
    else c = array2[b-1];
    d = ui->label_3->text().toInt();
    if(d<c){
        if(d>8){
            str = QString::number(d+1);
        }
        else{
            str = "0" + QString::number(d+1);
        }
        ui->label_3->setText(str);
    }
}
