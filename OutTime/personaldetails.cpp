#include "personaldetails.h"
#include "ui_personaldetails.h"

personalDetails::personalDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalDetails)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setStyleSheet("QTableWidget::item:selected { background-color: rgb(255,255,255) }");
    ui->tableWidget->setRowCount(3);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0,90);
    ui->tableWidget->setColumnWidth(1,138);
    QStringList header;
    header<<"身份"<<"姓名";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

personalDetails::~personalDetails()
{
    delete ui;
}
