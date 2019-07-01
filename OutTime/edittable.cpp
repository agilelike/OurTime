#include "edittable.h"
#include "ui_edittable.h"

editTable::editTable(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::editTable)
{
    initTitleBar();
    ui->setupUi(this);
}

editTable::~editTable()
{
    delete ui;
}
void editTable::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
void editTable::makeEdit()
{
    ui->dateEdit->setDate(QDate(2019,1,1));
    ui->lineEdit_2->clear();
    ui->timeEdit->setTime(QTime(8,0));
    ui->timeEdit_2->setTime(QTime(8,0));
    ui->checkBox->setChecked(false);
    this->show();
}

void editTable::on_pushButton_clicked()
{
    QDate date = ui->dateEdit->date();
    QString content = ui->lineEdit_2->text();
    QTime bt = ui->timeEdit->time();
    QTime et = ui->timeEdit_2->time();
    bool checked = ui->checkBox->isChecked();
    emit passcontent(date,content,bt,et,checked);
    this->hide();
}

void editTable::on_pushButton_2_clicked()
{
    this->hide();
}
