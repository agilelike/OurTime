#include "edittable4.h"
#include "ui_edittable4.h"
#include "qmessagebox.h"
edittable4::edittable4(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::edittable4)
{
    initTitleBar();
    ui->setupUi(this);
}

edittable4::~edittable4()
{
    delete ui;
}
void edittable4::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}

void edittable4::on_pushButton_2_clicked()
{
    this->hide();
}

void edittable4::on_pushButton_clicked()
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
        emit taskedit(s);
        this->hide();
    }
}
void edittable4::get4(int m, int n){
    Schedule s = user->tsche[m]->s[n];
    ui->dateEdit->setDate(s.t);
    ui->timeEdit->setTime(s.end);
    ui->lineEdit->setText(s.name);
}
