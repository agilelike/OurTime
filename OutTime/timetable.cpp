#include "timetable.h"
#include "ui_timetable.h"
#include <QDebug>
#include <QStringList>
#include <QAction>
#include <QMenu>

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
    QDate date;
    QString content;
    QTime bt;
    QTime et;
    bool checked;

    int len;
    QTime b;
    int begin;

    //初始化时就读取数据库，进行绘制,按理说应当读取本周的一周的数据
    //可以根据上面写的判断周几函数，得到今天是周几
    for(int i=0;i<7;i++){
        for(int j=0;j<=2;j++){
            date = QDate(2019,7,i+1);
            content = "睡觉";
            bt = QTime(8+j*3,0);
            et = QTime(10+j*3,0);
            len = bt.secsTo(et)/60;
            b = QTime(8,0);
            begin = b.secsTo(bt)/60;
            checked = false;
            btn[i]<<new QPushButton(this);
            btn[i][j]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
            btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

            if(checked==true)
            {
                btn[i][j]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
            }
            else
            {
                btn[i][j]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
            }

            btn[i][j]->show();
            btn[i][j]->setObjectName(QString::number(i)+"."+ QString::number(j));
            //添加点击
            connect(btn[i][j],SIGNAL(clicked()),this,SLOT(clickevent()));
            //按钮绑定右键编辑与删除操作
            editAct[i]<<new QAction("编辑日程",btn[i][j]);
            delAct[i]<<new QAction("删除日程",btn[i][j]);
            btn[i][j]->setContextMenuPolicy(Qt::ActionsContextMenu);
            btn[i][j]->addAction(editAct[i][j]);
            btn[i][j]->addAction(delAct[i][j]);
            connect(editAct[i][j],SIGNAL(triggered()),this,SLOT(editSchedule()));
            connect(delAct[i][j],SIGNAL(triggered()),this,SLOT(delSchedule()));
        }
    }


 //   btn[0][0]->setContextMenuPolicy(Qt::CustomContextMenu);
    //上下文菜单策略，右键点控件时会发送信号
//    connect(btn[0][0],&QPushButton::customContextMenuRequested,[=](const QPoint &pos)
//    {
//        qDebug()<<pos;
//        buttonmenu->exec(QCursor::pos());
//    });
//    connect(buttonact1, &QAction::triggered, [=]()
//    {
//        qDebug()<<"I'm btnFirstAction";
//    });
//    connect(buttonact2, &QAction::triggered, [=]()
//    {
//        qDebug()<<"I'm btnSecondAction";
//    });


    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    et1 = new editTable();
    connect(ui->pushButton,SIGNAL(clicked()),et1,SLOT(makeEdit()));
    et2 = new edittable2();
    connect(ui->pushButton_4,SIGNAL(clicked()),et2,SLOT(makeEdit()));
    et3 = new edittable3();

    ui->pushButton_4->hide();
    connect(et1,SIGNAL(passcontent(QDate,QString,QTime,QTime,bool)),this,SLOT(getcontent1(QDate,QString,QTime,QTime,bool)));
    connect(et3,SIGNAL(editContent(QDate,QString,QTime,QTime,bool)),this,SLOT(getcontent2(QDate,QString,QTime,QTime,bool)));

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


//未实现，编辑和删除按钮可以不用了，最后直接删除两个按钮，都加到独自的右键菜单里了
void TimeTable::on_pushButton_2_clicked()
{
    // QPushButton *p = new QPushButton("aaa");
    // ui->verticalLayout->addWidget(p);

    //QPushButton *p = new QPushButton(this);
    //p->setGeometry(280,90,80,40);
    //p->show();

//    for(int i=0;i<=5;i++){
//        btn1<<new QPushButton(this);
//        btn1[i]->setText("吃饭");
//        btn1[i]->setGeometry(280,50+i*50,80,40);
//        btn1[i]->show();
//    }
}

//点击按钮后可以得到i，j的值，之后可以进行在右边显示
void TimeTable::clickevent(){
    QPushButton *source=qobject_cast<QPushButton*>(sender());
    qDebug()<<source->objectName();
    QStringList list = source->objectName().split(".");
    int i = list[0].toInt();
    int j = list[1].toInt();
    qDebug()<<i<<j;
    //下面是在调用数据库的东西然后在右边显示
}

//从另一个页面点确定后传到该页面，对数据处理，写入数据库并重新绘制
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

    //将链表清空
//    qDeleteAll(btn1);
//    btn1.clear();
//    qDeleteAll(btn2);
//    btn2.clear();
//    qDeleteAll(btn3);
//    btn3.clear();
//    qDeleteAll(btn4);
//    btn4.clear();
//    qDeleteAll(btn5);
//    btn5.clear();
//    qDeleteAll(btn6);
//    btn6.clear();
//    qDeleteAll(btn7);
//    btn7.clear();

    //重新写到数据库重新读取重新绘制











    //添加直接绘制，以前的写法，不必要
//    if(week==1){
//        btn1<<new QPushButton(this);
//        btn1[btn1.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn1[btn1.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn1[btn1.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn1[btn1.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn1[btn1.length()-1]->show();
//    }
//    else if(week==2){
//        btn2<<new QPushButton(this);
//        btn2[btn2.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn2[btn2.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn2[btn2.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn2[btn2.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn2[btn2.length()-1]->show();
//    }
//    else if(week==3){
//        btn3<<new QPushButton(this);
//        btn3[btn3.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn3[btn3.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn3[btn3.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn3[btn3.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn3[btn3.length()-1]->show();
//    }
//    else if(week==4){
//        btn4<<new QPushButton(this);
//        btn4[btn4.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn4[btn4.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn4[btn4.length()-2]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn4[btn4.length()-2]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn4[btn4.length()-1]->show();
//    }
//    else if(week==5){
//        btn5<<new QPushButton(this);
//        btn5[btn5.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn5[btn5.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn5[btn5.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn5[btn5.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn5[btn1.length()-1]->show();
//    }
//    else if(week==6){
//        btn6<<new QPushButton(this);
//        btn6[btn6.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn6[btn6.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn6[btn6.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn6[btn6.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn6[btn6.length()-1]->show();
//    }
//    else if(week==7){
//        btn7<<new QPushButton(this);
//        btn7[btn7.length()-1]->setText(content+"\n"+bt.toString("h:mm")+"-"+et.toString("h:mm"));
//        btn7[btn7.length()-1]->setGeometry(280+(week-1)*80,70+begin/2,80,len/2);
//        if(checked==true){
//            btn7[btn7.length()-1]->setStyleSheet("background: rgb(85,170,255);font-size:8pt");
//        }
//        else{
//            btn7[btn7.length()-1]->setStyleSheet("background: rgb(0,85,255);font-size:8pt");
//        }
//        btn7[btn7.length()-1]->show();
//    }
}

//从编辑页面上得到数据，删除数据库，重新绘制
void TimeTable::getcontent2(QDate date,QString content,QTime bt,QTime et,bool checked){
    //在数据库里删除
    //利用暂存的m,n(存的是i,j) 来删除数据库里的东西


    //然后将得到的信息加入数据库，重新绘制
}

//编辑日程，右键点击编辑日程
void TimeTable::editSchedule(){
    QAction *source = qobject_cast<QAction*>(sender());
    qDebug()<<source->parent()->objectName();
    QStringList list = source->parent()->objectName().split(".");
    m = list[0].toInt();
    n = list[1].toInt();
    qDebug()<<m<<n;

    //得到i，j之后可以进行数据库操作，还该显示一个界面能够进行编辑,应当读取数据到这个界面，点确定后再修改数据库。
    //读取数据库的内容给et3然后显示et3



    et3->show();

}
//删除日程，右键点击删除日程
void TimeTable::delSchedule(){
    QAction *source = qobject_cast<QAction*>(sender());
    qDebug()<<source->parent()->objectName();
    QStringList list = source->parent()->objectName().split(".");
    int i = list[0].toInt();
    int j = list[1].toInt();
    qDebug()<<i<<j;
    //得到i，j之后可以进行数据库操作
    //在数据库里删除，然后重绘页面
}
