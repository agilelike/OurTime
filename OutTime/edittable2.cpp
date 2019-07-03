#include "edittable2.h"
#include "ui_edittable2.h"
#include "qmessagebox.h"
edittable2::edittable2(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::edittable2)
{
    initTitleBar();
    ui->setupUi(this);
}

edittable2::~edittable2()
{
    delete ui;
}
void edittable2::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
void edittable2::makeEdit()
{
    ui->dateEdit->setDate(QDate(2019,1,1));
    ui->timeEdit->setTime(QTime(8,0));
    ui->lineEdit->clear();
    this->show();
}

void edittable2::on_pushButton_2_clicked()
{
    this->hide();
}

void edittable2::on_pushButton_clicked()
{
    Schedule s;
    s.t = ui->dateEdit->date();
    s.end = ui->timeEdit->time();
    s.name = ui->lineEdit->text();
    s.state = 2;
    if(s.name==""){
        QMessageBox::about(this,tr("提示"),tr("事件名不能为空"));
    }
    if(s.name!=""){
        emit taskcontent(s);
        this->hide();
    }


}
