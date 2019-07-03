#include "teaminfo.h"
#include "ui_teaminfo.h"
#include "user.h"
#include <QString>
#include<QDate>
#include <QSqlQuery>
#include<QTime>
#include<QTimer>
#include "message.h"
#include <QVBoxLayout>
#include <QTextEdit>
teaminfo::teaminfo(QWidget *parent):
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //ui->scrollAreaWidgetContents->setStyleSheet("background-color: rgb(255, 255, 0);");
    ui->setupUi(this);

    //滑动窗口
    QVBoxLayout *pLayout = new QVBoxLayout();
    //showmessage();
    pLayout->setMargin(10);
    pLayout->setSpacing(200);
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

//QString teaminfo::findname(int userID)    //根据用户ID找名字
//{

//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("select userID from user where userName = '%1'").arg(username);
//    query.prepare(str);
//    query.exec();

//    QString name;
//    if(query.first())
//    {
//        name=query.value("userName").toString();
//    }
//     db.close();
//    return name;
//}

int teaminfo::findID(QString username)//根据用户名找
{
//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("select userID from user where userName = '%1'").arg(username);
//    query.prepare(str);
//    query.exec();
      int userid;
//    if(query.first())
//    {
//        userid=query.value("userID").toInt();
//    }
//     db.close();
    return userid;
}

void teaminfo::on_pushButton_clicked()
{
    QString context = ui->textEdit->toPlainText();
    QString toname = ui->comboBox->currentText();
    int toID = findID(toname);
    //user->sendMessage(toID,context);

}

//void teaminfo::judge()//排序
//{
//    if(ui->checkBox->isChecked()==true)
//    {
//        int i=0;
//        int j=0;
//        int len = user->messagenum();//数据条数
//        QList<Message>mes;
//        for(i=1;i<=len;i++)
//        {
//            mes.append(readMessage(i));
//        }
//        for(i=0;i<len-1;i++)
//        {
//            for(j=0;j<len-1-i;j++)
//            {
//                if(mes[j].getfromid()>mes[j+1].getfromid())
//                    qSwap(mes[j],mes[j+1]);
//            }
//        }
//    }
//    for(i=1;i<=len;i++)
//    {
//        QDate date=mes[i].getDate;
//       // QTime time;
//        int fromID = mes[i].getFromid();
//        QString context=mes[i].getContext();
//        QString strfrom = findname(fromID);
//        QString strdate = date.toString("dddd, MMMM , yyyy");
//       // QString strtime = time.toString("h:m ap");
//       //strdate.append(strtime);//内容加时间
//        strdate.append("\n");
//        strdate.append(context);
//        strdate.append("\n");
//        strdate.append(strfrom);
//    }
//}

//void teaminfo::showmessage()//显示消息
//{
//    int i = 0;
//    int messagenum = user->messagenum();

//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("select toID from message where toID='%1").arg(user->getid());
//    query.prepare(str);
//    query.exec();
//    while(query.next())
//    {
//        i++;
//        QDate date=query.value("date");
//       // QTime time;
//        int fromID = query.value("senderID").toInt();
//        QString context=query.value("messageContent").toString();
//        QString strfrom = findname(fromID);
//        QString strdate = date.toString("dddd, MMMM , yyyy");
//       // QString strtime = time.toString("h:m ap");
//       //strdate.append(strtime);//内容加时间
//        strdate.append("\n");
//        strdate.append(context);
//        strdate.append("\n");
//        strdate.append(strfrom);
//       // ui->textEdit->append(strdate);
//        QTextEdit *pTe = new QTextEdit();
//        pTe->setText(QString(strdate);
//        pTe->setMinimumSize(QSize(345,120));   //width height
//        pTe->setReadOnly(true);
//        pLayout->addWidget(pTe);//把按钮添加到布局控件中

//    }

//    db.close();
//}

//Message teaminfo::readMessage(int i)
//{
//    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");

//    db.setHostName("localhost");
//    db.setDatabaseName("ourtime");
//    db.setUserName("team");
//    db.setPassword("123456");
//    db.setPort(3306);
//    db.open();
//    //链接数据库
//    QSqlQuery query(db);
//    query.exec("SET NAMES 'GBK'");
//    QString str = QString("select toID from message where toID='%1").arg(user->getid());
//    query.prepare(str);
//    query.exec();
//    if(query.seek(i))
//    {
//        QDate date=query.value("date");
//        QTime time;
//        int fromID = query.value("senderID").toInt();
//        QString context=query.value("messageContent").toString();
//        Message mes = new Message(fromID,user->getid(),context,date,time);
//    }
//    db.close;
//    return mes;
//}
