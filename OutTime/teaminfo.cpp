#include "teaminfo.h"
#include "ui_teaminfo.h"
#include "user.h"
#include <QString>
#include "message.h"
teaminfo::teaminfo(QWidget *parent):
    QWidget(parent),
    ui(new Ui::teaminfo)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    //ui->scrollAreaWidgetContents->setStyleSheet("background-color: rgb(255, 255, 0);");
    ui->setupUi(this);
    QList<Message>mes;//其实是public类型的
}

teaminfo::~teaminfo()
{
    delete ui;
}

int teaminfo::findID(QString username)
{
    //根据用户名找用户ID
//    int id;
//    return id;
}

void teaminfo::on_pushButton_clicked()
{
    QString context = ui->textEdit->toPlainText();
    QString toname = ui->comboBox->currentText();
    int toID = findID(toname);
    user->sendMessage(toID,context);

}

void teaminfo::judge()
{
    if(ui->checkBox->isChecked()==true)
    {
        //random
    }
}

void teaminfo::showmessage()
{

}


