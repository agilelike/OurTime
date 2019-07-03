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
#include "desktop.h"
teaminfo::teaminfo(QWidget *parent):
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //ui->scrollAreaWidgetContents->setStyleSheet("background-color: rgb(255, 255, 0);");
    ui->setupUi(this);

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

QString teaminfo::findname(int userID)    //根据用户ID找名字
{

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("root");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    //链接数据库
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str = QString("select userName from user where userID = '%1'").arg(12345678);
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
    db.setUserName("root");
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
        db.setUserName("root");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();
        //链接数据库
        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str = QString("select datetime,messageContent,userName from message,user "
                              "where receiverID = '%1' and senderID = userID "
                              " ORDER BY senderID ASC ").arg(12345687);
        query.prepare(str);
        query.exec();

        while(query.next())
        {
            QString strdate = query.value("datetime").toString();
            int fromID = query.value("senderID").toInt();
            QString context=query.value("messageContent").toString();
            QString strfrom =QString("'%1'").arg(fromID);
            strdate.append("\r\n   ");
            strdate.append(context);
            strdate.append("\r\n");
            strdate.append(strfrom);

            QTextEdit *pTe = new QTextEdit();
            pTe->setText(QString(strdate));
            pTe->setMinimumSize(QSize(345,120));   //width height
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
        db.setUserName("root");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();
        //链接数据库
        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str = QString("select datetime,messageContent,userName from message,user "
                              "where receiverID = '%1' and senderID = userID "
                              "ORDER BY senderID DESC").arg(12345687);
        query.prepare(str);
        query.exec();

        while(query.next())
        {
            QString strdate = query.value("datetime").toString();
//            int fromID = query.value("senderID").toInt();
            QString fromName = query.value("userName").toString();
            QString context=query.value("messageContent").toString();
//            QString strfrom =QString("'%1'").arg(fromID);

            strdate.append("\r\n");
            strdate.append(context);
            strdate.append("\r\n");
            strdate.append(fromName);
            QTextEdit *pTe = new QTextEdit();
            pTe->setText(QString(strdate));
            pTe->setMinimumSize(QSize(345,120));   //width height
            pTe->setReadOnly(true);
            pLayout->addWidget(pTe);//把文本框添加到布局控件中
        }
        db.close();
        int num = user->messagenum();
        ui->scrollAreaWidgetContents->setMinimumHeight(num*140);
    }

}
