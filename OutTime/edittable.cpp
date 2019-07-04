#include "edittable.h"
#include "ui_edittable.h"
#include <QMessageBox>

editTable::editTable(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::editTable)
{

    initTitleBar();
    ui->setupUi(this);
    ui->dateEdit->setMaximumDate(QDate::currentDate().addDays(7-QDate::currentDate().dayOfWeek()));
    ui->dateEdit->setMinimumDate(QDate::currentDate().addDays(-QDate::currentDate().dayOfWeek()+1));
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
void editTable::makeEdit(bool f)
{
    flag = f;
    ui->dateEdit->setDate(QDate::currentDate());
    ui->lineEdit_2->clear();
    ui->timeEdit->setTime(QTime(8,0));
    ui->timeEdit_2->setTime(QTime(8,0));
    ui->checkBox->setChecked(false);
    if(f==1){
        //个人
        ui->checkBox->show();
    }
    else{
        ui->checkBox->hide();
    }
    this->show();
}

//点击显示页面添加日程
void editTable::on_pushButton_clicked()
{
    Schedule s;
    s.t = ui->dateEdit->date();
    s.name = ui->lineEdit_2->text();
    s.start = ui->timeEdit->time();
    s.end = ui->timeEdit_2->time();
    if(flag==1){
        //个人
        s.state = 0;
        s.isGrabed = ui->checkBox->isChecked();
    }
    else{
        //团队
        s.state = 1;
    }

    bool f = false;
    //容错控制
    int len = s.start.secsTo(s.end)/60;
    if(len<30){
        QMessageBox::about(this,tr("提示"),tr("时间必须在30分钟以上"));
        f=true;
    }
    if(s.name==""){
        QMessageBox::about(this,tr("提示"),tr("事件名不能为空"));
        f=true;
    }
    //从数据库里读当天所有日程的开始与结束时间
    //写一个循环，将s.start与s.end与所有这个日期的进行比较，若都不重叠，才允许添加。

    if(flag)
    {
        for(int i=0;i<user->psche[s.t.dayOfWeek()-1]->s.length();i++){
            if(!(s.end>user->psche[s.t.dayOfWeek()-1]->s[i].start ||user->psche[s.t.dayOfWeek()-1]->s[i].end>s.start)){
                QMessageBox::about(this,tr("提示"),tr("不能选该时间段"));
                f = true;
                break;
            }
        }
    }


    if(f==false){
        emit schecontent(s);
        this->hide();
    }
}

void editTable::on_pushButton_2_clicked()
{
    this->hide();
}
