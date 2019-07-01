#include "teaminfo.h"
#include "ui_teaminfo.h"
#include "user.h"
#include <QString>
#include<QDate>
#include<QTime>
#include<QTimer>
#include "message.h"
teaminfo::teaminfo(QWidget *parent):
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    //ui->scrollAreaWidgetContents->setStyleSheet("background-color: rgb(255, 255, 0);");
    ui->setupUi(this);
    //定时每秒刷新一次；
    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(this->showmessage()));
    timer->start(1000);
}

teaminfo::~teaminfo()
{
    delete ui;
}

QString teaminfo::findname(int userID)
{
    //根据用户ID找名字
    QString name;
    return name;
}

int teaminfo::findID(QString username)
{

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
    ui->textBrowser->append(strdate);
}

Message teaminfo::readMessage()
{
}

