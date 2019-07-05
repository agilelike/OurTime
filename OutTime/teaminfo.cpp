#include "teaminfo.h"
#include "ui_teaminfo.h"
#include "user.h"
#include <QString>
#include<QDateTime>
#include <QSqlQuery>
#include<QTimer>
#include "message.h"
#include <QVBoxLayout>
#include <QTextEdit>
#include <QList>
#include<QMessageBox>
#include "desktop.h"
#include <QDebug>
teaminfo::teaminfo(QWidget *parent):
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //ui->scrollAreaWidgetContents->setStyleSheet("background-color: rgb(255, 255, 0);");
    ui->setupUi(this);

//    界面美化
//    ui->pushButton->setStyleSheet("“border:2px white;border-radius:10px;padding:2px 4px;");
//    下拉列表生成



    //滑动窗口
    pLayout = new QVBoxLayout();
    pLayout->setMargin(10);
    pLayout->setSpacing(20);
    ui->scrollAreaWidgetContents->setLayout(pLayout);

    //定时每秒刷新一次；
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showmessage()));
    timer->start(1000);

}

teaminfo::~teaminfo()
{
    delete ui;
}

void teaminfo::setcombo()
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    qDebug()<<user->getTeamid()<<user->getid();
    QString str = QString("select userName from user "
                          "where teamID = '%1' and userID <> '%2'"
                          " ORDER BY userID ASC ").arg(user->getTeamid()).arg(user->getid());
    query.exec(str);

    while(query.next())
    {
        QString cstr = query.value(0).toString() ;
        ui->comboBox->addItem(cstr);
    }
    db.close();
}

QString teaminfo::findname(int userID)    //根据用户ID找名字
{

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userName from user where userID = '%1'").arg(userID);
    query.prepare(str);
    query.exec();

    QString name;
    if(query.first())
    {
        name=query.value("userName").toString();
    }
     db.close();
    return name;
}

int teaminfo::findID(QString username)//根据用户名找
{
    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userID from user where userName = '%1'").arg(username);
    query.prepare(str);
    query.exec();

    int userid;
    if(query.first())
    {
        userid=query.value("userID").toInt();
    }

    db.close();
    return userid;
}

void teaminfo::on_pushButton_clicked()
{
    QString context = ui->textEdit->toPlainText();
    QString toname = ui->comboBox->currentText();
    int toID = findID(toname);
    user->sendMessage(toID,context);
    QMessageBox::information(this,"tip","发送成功");
}


void teaminfo::showmessage()//显示消息和排序
{
    //将信息清空
    QLayoutItem *child;
    while(child=pLayout->layout()->takeAt(0)) {
        if(child->widget())
        {
           child->widget()->setParent(NULL);
        }
        delete child;
    }

    if(ui->checkBox->isChecked()==true)//排序
    {
        QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName("localhost");
        db.setDatabaseName("ourtime");
        db.setUserName("team");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();
        //链接数据库
        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str = QString("select time,messageContent,userName from message,user "
                              "where receiverID = '%1' and senderID = userID "
                              " ORDER BY senderID ASC ").arg(user->getid());
        query.prepare(str);
        query.exec();

        while(query.next())
        {

            QString strdate = query.value("time").toDateTime().toString("yyyy-MM-dd HH:mm:ss");
//            int fromID = query.value("senderID").toInt();
            QString fromName = query.value("userName").toString();
            QString context=query.value("messageContent").toString();
//            QString strfrom =QString("'%1'").arg(fromID);
            int len = QString(fromName).length();
            strdate.append("\r\n    ");
            strdate.append(context);
            strdate.append("\r\n");
            for(int i =0;i<22-len*2;i++)
            {
                strdate.append(" ");
            }
            strdate.append("from:");
            strdate.append(fromName);
            QTextEdit *pTe = new QTextEdit();
            pTe->setText(QString(strdate));
            pTe->setMinimumSize(QSize(345,120));   //width height
            pTe->setTextColor(QColor(100, 184, 255));
            pTe->setFont(QFont(tr("Consolas"), 16));
            pTe->setReadOnly(true);
            pLayout->addWidget(pTe);//把文本框添加到布局控件中
        }

        db.close();
    }
    else//正常的显示消息
    {
        QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

        db.setHostName("localhost");
        db.setDatabaseName("ourtime");
        db.setUserName("team");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();
        //链接数据库
        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str = QString("select time,messageContent,userName from message,user "
                              "where receiverID = '%1' and senderID = userID "
                              "ORDER BY time DESC").arg(user->getid());
        query.prepare(str);
        query.exec();

        while(query.next())
        {
            QString strdate = query.value("time").toDateTime().toString("yyyy-MM-dd HH:mm:ss");
//            int fromID = query.value("senderID").toInt();
            QString fromName = query.value("userName").toString();
            QString context=query.value("messageContent").toString();
//            QString strfrom =QString("'%1'").arg(fromID);
            int len = QString(fromName).length();
            strdate.append("\r\n    ");
            strdate.append(context);
            strdate.append("\r\n");
            for(int i =0;i<22-len*2;i++)
            {
                strdate.append(" ");
            }
            strdate.append("from:");
            strdate.append(fromName);
            QTextEdit *pTe = new QTextEdit();
            pTe->setText(QString(strdate));
            pTe->setMinimumSize(QSize(345,120));   //width height
            pTe->setTextColor(QColor(100, 184, 255));
            pTe->setFont(QFont(tr("Consolas"), 16));
            pTe->setReadOnly(true);
            pLayout->addWidget(pTe);//把文本框添加到布局控件中
        }
        db.close();
        int num = user->messagenum();
        ui->scrollAreaWidgetContents->setMinimumHeight(num*140);
    }

}
