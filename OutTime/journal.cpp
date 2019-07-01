#include "journal.h"
#include "ui_journal.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QDebug>
#include <QList>

journal::journal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::journal)
{
    showpSchedule();
    showJournal();


    ui->label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_2->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_3->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

journal::~journal()
{
    delete ui;
}

void journal::showpSchedule()
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    //ui->tableWidget->setStyleSheet("QTableWidget::item:selected { background-color: rgb(255,255,255) }");
    QStringList header;
    header<<"事件"<<"起始时间"<<"结束时间";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setColumnWidth(0,380);
    for(int i=1;i<3;i++){
        ui->tableWidget->setColumnWidth(i,100);
    }

    QString scheduleDate;
    scheduleDate.sprintf("%s-%s-%s" ,ui->label->text().toUtf8().data() ,ui->label_2->text().toUtf8().data() ,ui->label_3->text().toUtf8().data());

    QList<pSche> daySchedule;

    //获取当天的日程表
    getpSchedule(daySchedule ,scheduleDate);

    ui->tableWidget->setRowCount(daySchedule.size());

    //将当天的日程表显示出来
    for(int i = 0; i < ui->tableWidget->rowCount(); i++){
       ui->tableWidget->setItem(i, 0, new QTableWidgetItem(daySchedule.at(i).scheduleName));
       ui->tableWidget->setItem(i, 1, new QTableWidgetItem(daySchedule.at(i).startTime));
       ui->tableWidget->setItem(i, 2, new QTableWidgetItem(daySchedule.at(i).endTime));
    }
    for(int i = 0; i < ui->tableWidget->rowCount(); i++){
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}

void journal::getpSchedule(QList<pSche>& daySchedule ,QString scheduleDate)
{
    for(int i = 0 ;i < 3 ;i++)
    {
        pSche temp = {"复习计网" ,"8:00-10:00" ,scheduleDate};
        daySchedule.append(temp);
    }

/********数据库操作**********/

//    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
//    db.setPort(3306);                 //连接数据库端口号，与设置一致
//    db.setDatabaseName("test");      //连接数据库名，与设置一致
//    db.setUserName("team");          //数据库用户名，与设置一致
//    db.setPassword("123456");    //数据库密码，与设置一致
//    db.open();

//    QSqlQuery query(db);
//    query.exec("select * "
//               "from pSchedule "
//               "where scheduleDate = pSchedule.date and user.userID = userID");

//   while(query.next()){
//       pSche tempSche;
//       tempSche.userID = query.value("userID");
//       tempSche.pScheID = query.value("scheduleID");
//       tempSche.date = quert.value("date").toString();
//       tempSche.scheduleName = query.value("scheduleName").toString();
//       tempSche.startTime = query.value("startTime").toString();
//       tempSche.endTime = query.value("endTime").toString();

//       daySchedule.append(tempSche);
//   }

//   db.close();
}

void journal::showJournal()
{

}

void journal::on_toolButton_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()-1));
    ui->label_3->setText("01");
    showpSchedule();
}

void journal::on_toolButton_2_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()+1));
    ui->label_3->setText("01");
    showpSchedule();
}

void journal::on_toolButton_4_clicked()
{
    int a;
    QString str;
    a = ui->label_2->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->label_2->setText(str);
    }
    ui->label_3->setText("01");
    showpSchedule();
}

void journal::on_toolButton_3_clicked()
{
    int a;
    QString str;
    a = ui->label_2->text().toInt();
    if(a<12){
        if(a>8){
            str = QString::number(a+1);
        }
        else{
            str = "0" + QString::number(a+1);
        }
        ui->label_2->setText(str);
    }
    ui->label_3->setText("01");

    showpSchedule();
}

void journal::on_toolButton_6_clicked()
{
    int a;
    QString str;
    a = ui->label_3->text().toInt();
    if(a>1){
        if(a<11){
            str = "0" + QString::number(a-1);
        }
        else{
            str = QString::number(a-1);
        }
        ui->label_3->setText(str);
    }

    showpSchedule();
}

void journal::on_toolButton_5_clicked()
{
    int array1[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int array2[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int a = ui->label->text().toInt();
    int b = ui->label_2->text().toInt();
    int c,d;
    QString str;
    if(!a%4||!a%100){
        if(a%400)
            c = array1[b-1];
        else c = array2[b-1];
    }
    else c = array2[b-1];
    d = ui->label_3->text().toInt();
    if(d<c){
        if(d>8){
            str = QString::number(d+1);
        }
        else{
            str = "0" + QString::number(d+1);
        }
        ui->label_3->setText(str);
    }

    showpSchedule();
}
