#include "timetable.h"
#include "ui_timetable.h"
#include <QDebug>
#include <QStringList>
#include <QAction>
#include <QMenu>

TimeTable::TimeTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeTable)
{

    //第一次应当将flag置为true
    flag = true;

    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    et1 = new editTable();
    //connect(ui->pushButton,SIGNAL(clicked()),et1,SLOT(makeEdit()));
    et2 = new edittable2();
    connect(ui->pushButton_4,SIGNAL(clicked()),et2,SLOT(makeEdit()));
    et3 = new edittable3();
    connect(this,SIGNAL(passflag(bool)),et1,SLOT(makeEdit(bool)));

    et4 = new edittable4();

    ui->pushButton_4->hide();
    //页面传参
    connect(et1,SIGNAL(schecontent(Schedule)),this,SLOT(getschecontent(Schedule)));
    connect(et3,SIGNAL(scheedit(Schedule)),this,SLOT(getscheedit(Schedule)));
    connect(et2,SIGNAL(taskcontent(Schedule)),this,SLOT(gettaskcontent(Schedule)));
    connect(et4,SIGNAL(taskedit(Schedule)),this,SLOT(gettaskedit(Schedule)));

}

TimeTable::~TimeTable()
{
    delete ui;
}
void TimeTable::refreshBox()
{
    user->freshSchedule();
    for(int i=0;i<7;i++){
        qDeleteAll(btn[i]);
        btn[i].clear();
        qDeleteAll(editAct[i]);
        editAct[i].clear();
        qDeleteAll(delAct[i]);
        delAct[i].clear();
    }
    if(flag)
    {
        int len;
        QTime b;
        b = QTime(8,0);
        int begin;
        QList<pSchedule *>p=user->psche;
        for(int i=0;i<7;i++){
            for(int j=0;j<p[i]->s.length();j++){
               len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
                begin = b.secsTo(p[i]->s[j].start)/60;
                btn[i]<<new QPushButton(this);
                btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
                btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);

                if(p[i]->s[j].isGrabed==true)
                {
                    btn[i][j]->setStyleSheet("background: rgb(90,135,205);font-size:8pt");
                }
                else
                {
                    btn[i][j]->setStyleSheet("background: rgb(15,65,135);font-size:8pt");
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
    }else{
        int len;
        QTime b;
        b = QTime(8,0);
        int begin;
        QList<pSchedule *>p=user->tsche;
        for(int i=0;i<7;i++){
            for(int j=0;j<p[i]->s.length();j++){
                Schedule tmp=p[i]->s[j];
                if(tmp.state==1)
                {
                    len = p[i]->s[j].start.secsTo(p[i]->s[j].end)/60;
                    begin = b.secsTo(p[i]->s[j].start)/60;
                    btn[i]<<new QPushButton(this);
                    btn[i][j]->setText(p[i]->s[j].name+"\n"+p[i]->s[j].start.toString("h:mm")+"-"+p[i]->s[j].end.toString("h:mm"));
                    btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len/2);
                    btn[i][j]->setStyleSheet("background: rgb(255,170,0);font-size:8pt");

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
                }else{
                    len=5;
                    begin = b.secsTo(p[i]->s[j].end)/60;

                    btn[i]<<new QPushButton(this);
                    btn[i][j]->setGeometry(280+i*80,70+begin/2,80,len);
                    btn[i][j]->setStyleSheet("background: rgb(255,255,127);font-size:8pt");

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
    }

    //
}
void TimeTable::showEvent(QShowEvent *event)
{
    event->accept();
    refreshBox();
}

void TimeTable::on_commandLinkButton_clicked()
{
    //ui->label->setStyleSheet("border-image: url(:/image/personaltable.png);");
    ui->pushButton_4->hide();
    flag = true;
    //应当绘制个人的日程(重绘)
    refreshBox();
}

void TimeTable::on_commandLinkButton_2_clicked()
{
   // ui->label->setStyleSheet("border-image: url(:/image/teamtable.png);");
    ui->pushButton_4->show();
    flag = false;
   //应当绘制团队的日程(重绘)
    refreshBox();
}



//点击按钮后可以得到i，j的值，之后可以进行在右边显示
void TimeTable::clickevent(){
    QPushButton *source=qobject_cast<QPushButton*>(sender());
    qDebug()<<source->objectName();
    QStringList list = source->objectName().split(".");
    int i = list[0].toInt();
    int j = list[1].toInt();
    //下面是在调用数据库的东西然后在右边显示
    //根据i,j调用
    Schedule x=user->psche[i]->s[j];

    ui->l1->hide();
    ui->l2->hide();
    ui->l3->hide();
    ui->l4->hide();
    ui->l5->hide();
    ui->r1->hide();
    ui->r2->hide();
    ui->r3->hide();
    ui->r4->hide();
    ui->r5->hide();
    if(flag)
    {
        ui->l1->setText("日期");
        ui->l2->setText("日程名");
        ui->l3->setText("起始时间");
        ui->l4->setText("终止时间");
        ui->l5->setText("重要性");
        ui->r1->setText(x.t.toString("yyyy-MM-dd"));
        ui->r2->setText(x.name);
        ui->r3->setText(x.start.toString("hh:mm"));
        ui->r4->setText(x.end.toString("hh:mm"));
        ui->r5->setText((x.isGrabed)?"不重要":"重要");
        ui->l1->show();
        ui->l2->show();
        ui->l3->show();
        ui->l4->show();
        ui->l5->show();
        ui->r1->show();
        ui->r2->show();
        ui->r3->show();
        ui->r4->show();
        ui->r5->show();
    }else{
        if(x.state==1)
        {
            ui->l1->setText("日期");
            ui->l2->setText("日程名");
            ui->l3->setText("起始时间");
            ui->l4->setText("终止时间");
            ui->r1->setText(x.t.toString("yyyy-MM-dd"));
            ui->r2->setText(x.name);
            ui->r3->setText(x.start.toString("hh:mm"));
            ui->r4->setText(x.end.toString("hh:mm"));
            ui->l1->show();
            ui->l2->show();
            ui->l3->show();
            ui->l4->show();
            ui->r1->show();
            ui->r2->show();
            ui->r3->show();
            ui->r4->show();
        }else{
            ui->l1->setText("日期");
            ui->l2->setText("任务名");
            ui->l3->setText("截止时间");
            ui->r1->setText(x.t.toString("yyyy-MM-dd"));
            ui->r2->setText(x.name);
            ui->r3->setText(x.end.toString("hh:mm"));
            ui->l1->show();
            ui->l2->show();
            ui->l3->show();
            ui->r1->show();
            ui->r2->show();
            ui->r3->show();
        }
    }
}

//从另一个页面点确定后传到该页面，对数据处理，增加到数据库并重新绘制
void TimeTable::getschecontent(Schedule sche){
    //把sche的一些东西重新写到数据库重新读取重新绘制
    if(flag==true){
        //把sche写到个人日程的数据库
        user->psche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    else{
        //把sche写到团队日程的数据库
        user->tsche[sche.t.dayOfWeek()-1]->addSche(sche);
    }

    //重绘
    //flag为真则重绘个人的，否则绘制团队的
    refreshBox();

}

//从编辑页面上得到数据，删除数据库相应内容，重新绘制
void TimeTable::getscheedit(Schedule sche){
    //在数据库里删除
    //利用暂存的m,n(存的是i,j) 来删除数据库里的东西
    if(flag)
    {
        user->psche[m]->deleteSche(n);
    }else{
        user->tsche[m]->deleteSche(n);
    }
    //然后将得到的信息sche加入数据库，重新绘制
    if(flag==true){
        //把sche写到个人日程的数据库
        user->psche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    else{
        //把sche写到团队日程的数据库
        user->tsche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    refreshBox();
}


//添加团队任务后，应该去修改数据库，然后重新绘制团队的日程
void TimeTable::gettaskcontent(Schedule sche){
    //根据传来的sche的信息，修改数据库
    if(flag==true){
        //把sche写到个人日程的数据库
        user->psche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    else{
        //把sche写到团队日程的数据库
        user->tsche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    refreshBox();
}



//得到编辑的团队任务后，将原来的从数据库删除，写入新的，重绘
void TimeTable::gettaskedit(Schedule sche){
    if(flag)
    {
        user->psche[m]->deleteSche(n);
    }else{
        user->tsche[m]->deleteSche(n);
    }
    //然后将得到的信息sche加入数据库，重新绘制
    if(flag==true){
        //把sche写到个人日程的数据库
        user->psche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    else{
        //把sche写到团队日程的数据库
        user->tsche[sche.t.dayOfWeek()-1]->addSche(sche);
    }
    refreshBox();
}




//编辑日程，右键点击编辑日程
void TimeTable::editSchedule()
{
    QAction *source = qobject_cast<QAction*>(sender());
    qDebug()<<source->parent()->objectName();
    QStringList list = source->parent()->objectName().split(".");
    m = list[0].toInt();
    n = list[1].toInt();
    Schedule x=user->psche[m]->s[n];
    //根据m,n来操作
    //读取数据库的内容给et3，设置好et3的每一项，然后显示et3
    if(flag||x.state==1){
        et3->show();
    }
    else{
        et4->show();
    }
}
//删除日程，右键点击删除日程
void TimeTable::delSchedule(){
    QAction *source = qobject_cast<QAction*>(sender());
    qDebug()<<source->parent()->objectName();
    QStringList list = source->parent()->objectName().split(".");
    m = list[0].toInt();
    n = list[1].toInt();
    if(flag)
    {
        user->psche[m]->deleteSche(n);
    }else{
        user->tsche[m]->deleteSche(n);
    }
    refreshBox();
}

void TimeTable::on_pushButton_clicked()
{
    emit passflag(flag);
}
