#include "teaminfo.h"
#include "ui_teaminfo.h"
#include "user.h"
#include <QString>
#include<QDate>
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
    int i = 0;
    int messagenum = user->messagenum();
    QVBoxLayout *pLayout = new QVBoxLayout();
    for( i=0 ; i < messagenum; i++)
    {
         QTextEdit *pTe = new QTextEdit();
         pTe->setText(QString("消息%1").arg(i));
         pTe->setMinimumSize(QSize(345,120));   //width height
         pTe->setReadOnly(true);
         pLayout->addWidget(pTe);//把按钮添加到布局控件中
    }
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

QString teaminfo::findname(int userID)    //根据用户ID找名字
{

    QString name;
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
    query.exec(str);
    int id;
    return id;
}

void teaminfo::on_pushButton_clicked()
{
    QString context = ui->textEdit->toPlainText();
    QString toname = ui->comboBox->currentText();
    int toID = findID(toname);
    user->sendMessage(toID,context);

}

void teaminfo::judge()//排序
{
    if(ui->checkBox->isChecked()==true)
    {
        int i=0;
        int j=0;
        int len = 10;//数据条数
        QList<Message>mes;
        for(i;i<len;i++)
        {
            mes.append(this->readMessage());
        }
        for(i=0;i<len-1;i++)
        {
            for(j=0;j<len-1-i;j++)
            {
                if(mes[j].getfromid()>mes[j+1].getfromid())
                    qSwap(mes[j],mes[j+1]);
            }
        }


    }
}

void teaminfo::showmessage()//显示消息
{
    //读取数据
//    int number//消息条数
//    for(int i=0 ;i<=number;i++)//循环读取消息
//    {

//    }
    QDate date;
    QTime time;
    int fromID;
    QString context;
    QString strfrom = findname(fromID);
    QString strdate = date.toString("h:m ap");
    QString strtime = time.toString("dddd, MMMM , yyyy");
    strdate.append(strtime);
    strdate.append("\n");
    strdate.append(context);
    strdate.append("\n");
    strdate.append(strfrom);
    ui->textEdit->append(strdate);
}

Message teaminfo::readMessage()
{
}

