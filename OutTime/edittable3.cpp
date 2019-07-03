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
    Schedule s;
    s.t = ui->dateEdit->date();
    s.name = ui->lineEdit_2->text();
    s.start = ui->timeEdit->time();
    s.end = ui->timeEdit_2->time();
    s.isGrabed = ui->checkBox->isChecked();

    //容错控制
    int len =s.start.secsTo(s.end)/60;
    if(len<30){
        QMessageBox::about(this,tr("提示"),tr("时间必须在30分钟以上"));
    }
    if(s.name==""){
        QMessageBox::about(this,tr("提示"),tr("事件名不能为空"));
    }
    if(len>=30&&s.name!=""){
        emit scheedit(s);
        this->hide();
    }
}

void edittable3::on_pushButton_2_clicked()
{
    this->hide();
}
