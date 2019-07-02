#include "edittable3.h"
#include "ui_edittable3.h"
#include <QMessageBox>
edittable3::edittable3(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::edittable3)
{
    initTitleBar();
    ui->setupUi(this);
}

void edittable3::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
edittable3::~edittable3()
{
    delete ui;
}


void edittable3::on_pushButton_clicked()
{
    QDate date = ui->dateEdit->date();
    QString content = ui->lineEdit_2->text();
    QTime bt = ui->timeEdit->time();
    QTime et = ui->timeEdit_2->time();
    bool checked = ui->checkBox->isChecked();

    //容错控制
    int len =bt.secsTo(et)/60;
    if(len<30){
        QMessageBox::about(this,tr("提示"),tr("时间必须在30分钟以上"));
    }
    if(content==""){
        QMessageBox::about(this,tr("提示"),tr("事件名不能为空"));
    }
    if(len>=30&&content!=""){
        emit editContent(date,content,bt,et,checked);
        this->hide();
    }
}

void edittable3::on_pushButton_2_clicked()
{
    this->hide();
}
