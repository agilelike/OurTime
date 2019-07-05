#include "journal.h"
#include "ui_journal.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QDebug>
#include <QList>
#include <QDateTime>
#include <QString>
#include <user.h>
#include <QMessageBox>

journal::journal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::journal)
{
    //设置日程显示格式
    /*
     * 日程名  起始时间  结束时间
    */
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    //ui->tableWidget->setStyleSheet("QTableWidget::item:selected { background-color: rgb(255,255,255) }");
    QStringList header;
    header<<"日程名"<<"起始时间"<<"结束时间";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnCount(3);

    //日程名长度380 起始时间 结束时间均为100
    ui->tableWidget->setColumnWidth(0,380);
    for(int i=1;i<3;i++){
        ui->tableWidget->setColumnWidth(i,100);
    }

    //获取当前系统日期
    QDate date;
    ui->label->setText(QString::number(date.currentDate().year()));
    QString month;
    month.sprintf("%02d" ,date.currentDate().month());
    ui->label_2->setText(month.toLatin1().data());
    QString day;
    day.sprintf("%02d" ,date.currentDate().day());
    ui->label_3->setText(day.toLatin1().data());
    system_date.sprintf("%d-%02d-%02d" ,date.currentDate().year(),date.currentDate().month(),date.currentDate().day());

    //标签格式
    ui->label->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_2->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    ui->label_3->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    //显示日程和日志
    showpSchedule();
    showJournal();

    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    this->hide();
    this->setParent(parent);
}

journal::~journal()
{
    delete ui;
}

QString journal::getLabelDate()
{
    QString scheduleDate;
    scheduleDate.sprintf("%s-%s-%s" ,ui->label->text().toUtf8().data() ,ui->label_2->text().toUtf8().data() ,ui->label_3->text().toUtf8().data());
    return scheduleDate;
}

void journal::showpSchedule()
{    
    //获取当前日期"year-month-day"
    QString scheduleDate;
    scheduleDate = getLabelDate();

    //获取当天的日程表
    QList<pSche> daySchedule;
    getpSchedule(daySchedule ,scheduleDate);

    //将当天的日程表显示出来
    ui->tableWidget->setRowCount(daySchedule.size());
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
    //数据库链接
    QSqlDatabase db;
    connectDB(db);

    QSqlQuery query(db);
    query.exec("set NAMES 'GBK'");
    query.prepare("select scheduleName ,startTime ,endTime "
                  "from pSchedule "
                  "where userID = ? and date = ? ORDER BY userID ASC");
    query.addBindValue(user->getid());
    query.addBindValue(scheduleDate);
    query.exec();

    while(query.next()){
       pSche tempSche;
       tempSche.scheduleName = query.value("scheduleName").toString();
       tempSche.startTime = query.value("startTime").toString();
       tempSche.endTime = query.value("endTime").toString();
       daySchedule.append(tempSche);
    }
    db.close();
}


void journal::connectDB(QSqlDatabase &db)
{
    db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
    db.setPort(3306);                 //连接数据库端口号，与设置一致
    db.setDatabaseName("ourtime");      //连接数据库名，与设置一致
    db.setUserName("team");          //数据库用户名，与设置一致
    db.setPassword("123456");    //数据库密码，与设置一致
    db.open();
}

void journal::showJournal()
{
    //获取当前日期"year-month-day"
    QString scheduleDate;
    scheduleDate = getLabelDate();

    ui->journal_view->setText("");
    ui->clock_number->setText("X0");
    journalID = 0;

    //数据库链接
    QSqlDatabase db;
    connectDB(db);

    QSqlQuery query(db);
    query.exec("set NAMES 'GBK'");
    query.prepare("select journalID ,journalContent ,clockNumber "
                  "from journal "
                  "where date = ? and userID = ?");
    query.addBindValue(scheduleDate);
    query.addBindValue(user->getid());
    query.exec();
    if(query.next())
    {
        journalID = query.value("journalID").toInt();
        ui->journal_view->setText(query.value("journalContent").toString());
        ui->clock_number->setText("X" + query.value("clockNumber").toString());
    }

    db.close();
}

void journal::on_toolButton_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()-1));
    ui->label_3->setText("01");

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
}

void journal::on_toolButton_2_clicked()
{
    ui->label->setText(QString::number(ui->label->text().toInt()+1));
    ui->label_3->setText("01");

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
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

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
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

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
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

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
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

    //显示该日日程表和日志
    showpSchedule();
    showJournal();

    //设置日志更改权限
    QString current_date;
    current_date = getLabelDate();

    if(QString::compare(system_date ,current_date) > 0)
        ui->journal_view->setFocusPolicy(Qt::NoFocus);
    else
        ui->journal_view->setFocusPolicy(Qt::StrongFocus);
}

void journal::on_pushButton_clicked()
{
    if(ui->journal_view->toPlainText().length() > 300)
    {
        QMessageBox::information(NULL, "警告", "文本长度过长", QString(tr("确定")), NULL);
        return;
    }

    //获取当前日期
    QString current_date;
    current_date = getLabelDate();

    //数据库操作
    QSqlDatabase db;
    connectDB(db);

    QSqlQuery query(db);
    query.exec("set NAMES 'GBK'");
    if(journalID == 0)
    {
       query.prepare("insert into journal(date ,journalContent,clockNumber ,userID) values(?,?,?,?)");
       query.addBindValue(current_date);
       query.addBindValue(ui->journal_view->toPlainText());
       query.addBindValue(0);
       query.addBindValue(user->getid());
    }
    else
    {
       query.prepare("update journal set journalContent = ? where journalID = ?");
       query.addBindValue(ui->journal_view->toPlainText());
       query.addBindValue(journalID);
    }
    query.exec();

    QMessageBox::information(NULL, "提示", "日志已保存", QString(tr("确定")), NULL);

    db.close();
}
