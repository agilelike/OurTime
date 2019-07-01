#include "timetable.h"
#include "ui_timetable.h"
#include <QDebug>
//判断是周几函数
int ReturnWeekDay(int iYear,int iMonth,int iDay )
{
    int iWeek = 0;
    int y = 0, c = 0, m = 0, d = 0;

    if ( iMonth == 1 || iMonth == 2 )
    {
        c = ( iYear - 1 ) / 100;
        y = ( iYear - 1 ) % 100;
        m = iMonth + 12;
        d = iDay;
    }
    else
    {
        c = iYear / 100;
        y = iYear % 100;
        m = iMonth;
        d = iDay;
    }

    iWeek = y + y / 4 + c / 4 - 2 * c + 26 * ( m + 1 ) / 10 + d - 1;    //蔡勒公式
    iWeek = iWeek >= 0 ? ( iWeek % 7 ) : ( iWeek % 7 + 7 );    //iWeek为负时取模
    if ( iWeek == 0 )    //星期日不作为一周的第一天
    {
        iWeek = 7;
    }
    return iWeek;
}
TimeTable::TimeTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeTable)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    et = new editTable();
    connect(ui->pushButton,SIGNAL(clicked()),et,SLOT(makeEdit()));
    et2 = new edittable2();
    connect(ui->pushButton_4,SIGNAL(clicked()),et2,SLOT(makeEdit()));
    ui->pushButton_4->hide();
    connect(et,SIGNAL(passcontent(QDate,QString,QTime,QTime,bool)),this,SLOT(getcontent1(QDate,QString,QTime,QTime,bool)));

}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::on_commandLinkButton_clicked()
{
    //ui->label->setStyleSheet("border-image: url(:/image/personaltable.png);");
    ui->pushButton_4->hide();
}

void TimeTable::on_commandLinkButton_2_clicked()
{
   // ui->label->setStyleSheet("border-image: url(:/image/teamtable.png);");
    ui->pushButton_4->show();
}

void TimeTable::on_pushButton_2_clicked()
{
    // QPushButton *p = new QPushButton("aaa");
    // ui->verticalLayout->addWidget(p);

    //QPushButton *p = new QPushButton(this);
    //p->setGeometry(280,90,80,40);
    //p->show();

    for(int i=0;i<=5;i++){
        btn1<<new QPushButton(this);
        btn1[i]->setText("吃饭");
        btn1[i]->setGeometry(280,50+i*50,80,40);
        btn1[i]->show();
    }
}
void TimeTable::getcontent1(QDate date,QString content,QTime bt,QTime et,bool checked){
    //得到周几
    int year = date.year();
    int month = date.month();
    int day = date.day();
    int week = ReturnWeekDay(year,month,day);
    //区间长
    int len = bt.secsTo(et)/60;
    QTime b = QTime(8,0);
    int begin = b.secsTo(bt)/60;

    //打印一下结果
    //qDebug()<<len<<begin;
    if(week==1){
        btn1<<new QPushButton(this);
        btn1[btn1.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn1[btn1.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn1[btn1.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn1[btn1.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn1[btn1.length()-1]->show();
    }
    else if(week==2){
        btn2<<new QPushButton(this);
        btn2[btn1.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn2[btn2.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn2[btn2.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn2[btn2.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn2[btn2.length()-1]->show();
    }
    else if(week==3){
        btn3<<new QPushButton(this);
        btn3[btn3.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn3[btn3.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn3[btn3.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn3[btn3.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn3[btn3.length()-1]->show();
    }
    else if(week==4){
        btn4<<new QPushButton(this);
        btn4[btn4.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn4[btn4.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn4[btn4.length()-2]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn4[btn4.length()-2]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn4[btn4.length()-1]->show();
    }
    else if(week==5){
        btn5<<new QPushButton(this);
        btn5[btn1.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn5[btn1.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn5[btn5.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn5[btn5.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn5[btn1.length()-1]->show();
    }
    else if(week==6){
        btn6<<new QPushButton(this);
        btn6[btn6.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn6[btn6.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn6[btn6.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn6[btn6.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn6[btn6.length()-1]->show();
    }
    else if(week==7){
        btn7<<new QPushButton(this);
        btn7[btn7.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
        btn7[btn7.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
        if(checked==true){
            btn7[btn7.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
        }
        else{
            btn7[btn7.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
        }
        btn7[btn7.length()-1]->show();
    }
}
