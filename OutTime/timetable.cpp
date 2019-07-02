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

    //应该有7个pSchedule，好像还得new..，得声明、分配空间
    pSchedule *p[7];

    //进行数据库操作，完成QList<Schedule> s的读入







    //初始化时就读取数据库，进行绘制,按理说应当读取本周的一周的数据
    //可以根据上面写的判断周几函数，得到今天是周几
    //循环，将按钮绘制，并进行一系列绑定
    int len;
    QTime b;
    b = QTime(8,0);
    int begin;

    for(int i=0;i<7;i++){
        for(int j=0;j<p[i]->s.length();j++){
            len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
            begin = b.secsTo(p[i]->s[j].start)/60;
            btn[i]<<new QPushButton(this);
            btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
            btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

            if(p[i]->s[j].isGrabed==true)
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

    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    et1 = new editTable();
    connect(ui->pushButton,SIGNAL(clicked()),et1,SLOT(makeEdit()));
    et2 = new edittable2();
    connect(ui->pushButton_4,SIGNAL(clicked()),et2,SLOT(makeEdit()));
    et3 = new edittable3();

    ui->pushButton_4->hide();
    //页面传参
    connect(et1,SIGNAL(passcontent(Schedule)),this,SLOT(getcontent1(Schedule)));
    connect(et3,SIGNAL(editContent(Schedule)),this,SLOT(getcontent2(Schedule)));

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



//点击按钮后可以得到i，j的值，之后可以进行在右边显示
void TimeTable::clickevent(){
    QPushButton *source=qobject_cast<QPushButton*>(sender());
    qDebug()<<source->objectName();
    QStringList list = source->objectName().split(".");
    int i = list[0].toInt();
    int j = list[1].toInt();
    qDebug()<<i<<j;
    //下面是在调用数据库的东西然后在右边显示
    //根据i,j调用





    //在右边展示，下面没写全，应当从数据库得到东西，下面再set
//    ui->label_7->setText();
//    ui->label_14->setText();
//    ui->label_10->setText();
//    ui->label_12->setText();
//    ui->label_17->setText();

}

//从另一个页面点确定后传到该页面，对数据处理，增加到数据库并重新绘制
void TimeTable::getcontent1(Schedule sche){
    //得到周几
    int year = sche.t.year();
    int month = sche.t.month();
    int day = sche.t.day();
    int week = ReturnWeekDay(year,month,day);
    //区间长
    int len ;
    QTime b = QTime(8,0);
    int begin;


    //把sche的一些东西重新写到数据库重新读取重新绘制









    //重绘
    for(int i=0;i<7;i++){
        qDeleteAll(btn[i]);
        btn[i].clear();
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<p[i]->s.length();j++){
            len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
            begin = b.secsTo(p[i]->s[j].start)/60;
            btn[i]<<new QPushButton(this);
            btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
            btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

            if(p[i]->s[j].isGrabed==true)
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
}

//从编辑页面上得到数据，删除数据库相应内容，重新绘制
void TimeTable::getcontent2(Schedule sche){
    //在数据库里删除
    //利用暂存的m,n(存的是i,j) 来删除数据库里的东西






    //然后将得到的信息sche加入数据库，重新绘制







    //重绘
    int len;
    QTime b;
    b = QTime(8,0);
    int begin;
    for(int i=0;i<7;i++){
        qDeleteAll(btn[i]);
        btn[i].clear();
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<p[i]->s.length();j++){
            len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
            begin = b.secsTo(p[i]->s[j].start)/60;
            btn[i]<<new QPushButton(this);
            btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
            btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

            if(p[i]->s[j].isGrabed==true)
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
}

//编辑日程，右键点击编辑日程
void TimeTable::editSchedule(){
    QAction *source = qobject_cast<QAction*>(sender());
    qDebug()<<source->parent()->objectName();
    QStringList list = source->parent()->objectName().split(".");
    m = list[0].toInt();
    n = list[1].toInt();
    qDebug()<<m<<n;

    //根据m,n来操作
    //读取数据库的内容给et3，设置好et3的每一项，然后显示et3






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
    //数据库删除




    //重绘
    int len;
    QTime b;
    b = QTime(8,0);
    int begin;
    for(int i=0;i<7;i++){
        qDeleteAll(btn[i]);
        btn[i].clear();
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<p[i]->s.length();j++){
            len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
            begin = b.secsTo(p[i]->s[j].start)/60;
            btn[i]<<new QPushButton(this);
            btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
            btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

            if(p[i]->s[j].isGrabed==true)
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



}
