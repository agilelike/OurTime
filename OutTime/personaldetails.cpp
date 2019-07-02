#include "personaldetails.h"
#include "ui_personaldetails.h"
#include <QDebug>
#include<cstdlib>
#include<ctime>
#include <user.h>
#include <QTextStream>
#include <stdio.h>

personalDetails::personalDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalDetails)
{
    ui->setupUi(this);

    ui->textBrowser->setFocusPolicy(Qt::NoFocus);
    ui->textBrowser_2->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0,90);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList header1;
    header1<<"身份"<<"姓名";
    ui->tableWidget->setHorizontalHeaderLabels(header1);

    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setColumnCount(2);
    ui->tableWidget_2->setColumnWidth(0,90);
    ui->tableWidget_2->setColumnWidth(1,115);
    QStringList header2;
    header2<<"账号"<<"姓名";
    ui->tableWidget_2->setHorizontalHeaderLabels(header2);

    image1 = QImage(220,150,QImage::Format_RGB32);
    QColor backColor = qRgb(255,255,255);
    image1.fill(backColor);
    image2 = QImage(220,150,QImage::Format_RGB32);
    image2.fill(backColor);
    PaintImage1();
    PaintImage2();

    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    haveTeam();
}

void personalDetails::haveTeam()
{
    switch (user->getTeamState()) {
    case 0:
        ui->lineEdit->show();
        ui->label_13->show();
        ui->label_14->show();
        ui->label_15->show();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->show();
        ui->pushButton_4->show();
        ui->tableWidget->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->textBrowser->hide();
        ui->pushButton_2->hide();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    case 1:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->textBrowser->show();
        ui->pushButton_2->show();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    case 2:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->hide();
        ui->label_17->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->textBrowser->show();
        ui->pushButton_2->hide();
        ui->pushButton_5->show();
        ui->label_18->show();
        ui->tableWidget_2->show();
        ui->pushButton_6->show();
        ui->pushButton_7->show();
        break;
    case 3:
        ui->lineEdit->hide();
        ui->label_13->hide();
        ui->label_14->hide();
        ui->label_15->hide();
        ui->label_16->show();
        ui->label_17->show();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->tableWidget->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->textBrowser->hide();
        ui->pushButton_2->hide();
        ui->pushButton_5->hide();
        ui->label_18->hide();
        ui->tableWidget_2->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        break;
    default:
        break;
    }
}

personalDetails::~personalDetails()
{
    delete ui;
}

void personalDetails::on_pushButton_3_clicked()
{
    if(!ui->lineEdit->text().isEmpty()){
        ui->label_19->hide();
        if(user->applyToTeam(ui->lineEdit->text().toInt()))
            emit showInformation();
        ui->lineEdit->clear();
    }
    else
        ui->lineEdit->clear();
        ui->label_19->show();
}

void personalDetails::on_pushButton_2_clicked()
{
    if(user->exitTeam())
        emit showInformation();
}

void personalDetails::on_pushButton_4_clicked()
{
    emit showCreateTeam();
}

void personalDetails::on_pushButton_5_clicked()
{
    user->dismissTeam();
    emit showInformation();
}

void personalDetails::on_pushButton_clicked()
{
    user->logout();
    emit showInformation();
}

void personalDetails::on_pushButton_6_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget_2->item(row1,1)->text();

        QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("ourtime");
        db.setUserName("team");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();

        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str1=QString("update user set state = 1 where userName='%1'").arg(str);
        query.exec(str1);
        query.exec("SET NAMES 'UTF8'");
        db.close();
        team->updateTeam(user->getTeamid());
        showMember();
    }
}

void personalDetails::on_pushButton_7_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget_2->item(row1,1)->text();

        QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("ourtime");
        db.setUserName("team");
        db.setPassword("123456");
        db.setPort(3306);
        db.open();

        QSqlQuery query(db);
        query.exec("SET NAMES 'GBK'");
        QString str1=QString("update user set state = 0,teamID = 0 where userName='%1'").arg(str);
        query.exec(str1);
        query.exec("SET NAMES 'UTF8'");
        db.close();
        team->updateTeam(user->getTeamid());
        showMember();
    }
}

void personalDetails::PaintImage1()
{
    QPainter painter(&image1);
    painter.setRenderHint(QPainter::Antialiasing, true);//设置反锯齿模式

    int pointx=20,pointy=130;//确定坐标轴起点坐标
    int width=190-pointx,height=120;//确定坐标轴宽度跟高度

    //绘制坐标轴
    painter.drawRect(5,5,220-5,150-5);
    painter.drawLine(pointx,pointy,width+pointx,pointy);//坐标轴x宽度为width
    painter.drawLine(pointx,pointy-height,pointx,pointy);//坐标轴y高度为height


    srand(time(NULL));

    //获得数据中最大值和最小值、平均数
    int n=5;
    double sum=0;
    double ave=0;
    int max=0;
    int a[n];

    for(int i=0;i<n;i++)
        a[i]=rand()%40+20;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    ave=sum/n;//平均数

    double kx=(double)width/7; //x轴的系数
    double ky=(double)height/max;//y轴系数
    QPen pen,penPoint;
    pen.setColor(Qt::black);
    pen.setWidth(2);

    penPoint.setColor(Qt::blue);
    penPoint.setWidth(5);
    for(int i=1;i<n;i++)
    {
        painter.setPen(pen);//黑色笔用于连线
        painter.drawLine(pointx+kx*i,pointy-a[i-1]*ky,pointx+kx*(i+1),pointy-a[i]*ky);
        painter.drawText(pointx+kx*i,pointy-a[i-1]*ky+15,QString::number(a[i-1]));
        painter.setPen(penPoint);//蓝色的笔，用于标记各个点
        painter.drawPoint(pointx+kx*i,pointy-a[i-1]*ky);
    }
    painter.drawPoint(pointx+kx*n,pointy-a[n-1]*ky);//绘制最后一个点
    painter.setPen(pen);
    painter.drawText(pointx+kx*n,pointy-a[n-1]*ky+15,QString::number(a[n-1]));

    //绘制平均线
    QPen penAve;
    penAve.setColor(Qt::red);//选择红色
    penAve.setWidth(2);
    penAve.setStyle(Qt::DotLine);//线条类型为虚线
    painter.setPen(penAve);
    painter.drawLine(pointx,pointy-ave*ky,pointx+width,pointy-ave*ky);
    painter.drawText(pointx+4,pointy-ave*ky,QString::number((int)(ave+0.5)));

    //绘制刻度线
    QPen penDegree;
    penDegree.setColor(Qt::black);
    penDegree.setWidth(2);
    painter.setPen(penDegree);

    //画上x轴刻度线
    for(int i=0;i<7;i++)
    {
        painter.drawLine(pointx+(i+1)*width/7,pointy,pointx+(i+1)*width/7,pointy+4);
        painter.drawText(pointx+(i+0.65)*width/7,pointy+7,QString::number((int)((i+1)*((double)n/7))));
    }
    //y轴刻度线
    double maxStep=(double)max/7;
    for(int i=0;i<7;i++)
    {
        painter.drawLine(pointx,pointy-(i+1)*height/7,
                         pointx-4,pointy-(i+1)*height/7);
        painter.drawText(pointx-20,pointy-(i+0.85)*height/7,
                         QString::number((int)(maxStep*(i+1))));
    }
}

void personalDetails::PaintImage2()
{
    QPainter painter(&image2);
    painter.setRenderHint(QPainter::Antialiasing, true);
    int pointx=20,pointy=130;
    int width=190-pointx,height=120;
    //绘制坐标轴
    painter.drawRect(5,5,220-5,150-5);
    painter.drawLine(pointx,pointy,width+pointx,pointy);
    painter.drawLine(pointx,pointy-height,pointx,pointy);

    srand(time(NULL));
    int n=5;
    double sum=0;
    double ave=0;
    int max=0;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%40+20;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    ave=sum/n;

    double kx=(double)width/7;
    double ky=(double)height/max;
    QPen pen,penPoint;
    pen.setColor(Qt::black);
    pen.setWidth(2);

    penPoint.setColor(Qt::blue);
    penPoint.setWidth(5);
    for(int i=1;i<n;i++)
    {
        painter.setPen(pen);//黑色笔用于连线
        painter.drawLine(pointx+kx*i,pointy-a[i-1]*ky,pointx+kx*(i+1),pointy-a[i]*ky);
        painter.drawText(pointx+kx*i,pointy-a[i-1]*ky+15,QString::number(a[i-1]));
        painter.setPen(penPoint);//蓝色的笔，用于标记各个点
        painter.drawPoint(pointx+kx*i,pointy-a[i-1]*ky);
    }
    painter.drawPoint(pointx+kx*n,pointy-a[n-1]*ky);//绘制最后一个点
    painter.setPen(pen);
    painter.drawText(pointx+kx*n,pointy-a[n-1]*ky+15,QString::number(a[n-1]));

    //绘制平均线
    QPen penAve;
    penAve.setColor(Qt::red);//选择红色
    penAve.setWidth(2);
    penAve.setStyle(Qt::DotLine);//线条类型为虚线
    painter.setPen(penAve);
    painter.drawLine(pointx,pointy-ave*ky,pointx+width,pointy-ave*ky);
    painter.drawText(pointx+4,pointy-ave*ky,QString::number((int)(ave+0.5)));

    //绘制刻度线
    QPen penDegree;
    penDegree.setColor(Qt::black);
    penDegree.setWidth(2);
    painter.setPen(penDegree);

    //画上x轴刻度线
    for(int i=0;i<7;i++)
    {
        painter.drawLine(pointx+(i+1)*width/7,pointy,pointx+(i+1)*width/7,pointy+4);
        painter.drawText(pointx+(i+0.65)*width/7,pointy+7,QString::number((int)((i+1)*((double)n/7))));
    }
    //y轴刻度线
    double maxStep=(double)max/7;
    for(int i=0;i<7;i++)
    {
        painter.drawLine(pointx,pointy-(i+1)*height/7,
                         pointx-4,pointy-(i+1)*height/7);
        painter.drawText(pointx-20,pointy-(i+0.85)*height/7,
                         QString::number((int)(maxStep*(i+1))));
    }
}

void personalDetails::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawImage(20,200,image1);
    painter.drawImage(310,200,image2);
    image1 = QImage(220,150,QImage::Format_RGB32);
    QColor backColor = qRgb(255,255,255);
    image1.fill(backColor);
    image2 = QImage(220,150,QImage::Format_RGB32);
    image2.fill(backColor);
    PaintImage1();
    PaintImage2();

    ui->textBrowser_2->setText(user->getName());
    ui->textBrowser->setText(QString::number(user->getTeamid()));
    haveTeam();
}

void personalDetails::showMember(){
    QTextStream cout(stdout,  QIODevice::WriteOnly);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget_2->setRowCount(0);
    ui->tableWidget_2->setColumnCount(2);
    team->updateTeam(user->getTeamid());

    QSqlDatabase  db =  QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("ourtime");
    db.setUserName("team");
    db.setPassword("123456");
    db.setPort(3306);
    db.open();
    QSqlQuery query(db);
    query.exec("SET NAMES 'GBK'");
    QString str;
    int row,row1;
    cout<<team->getMember().size()<<endl;
    for(int i = 0;i != team->getMember().size();i++){
        int j = team->getMember().at(i).second;
        switch (j) {
        case 1:
            str = QString("select userName from user where userID = '%1'").arg(team->getMember().at(i).first);
            query.exec(str);
            query.next();
            row = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row,0,new QTableWidgetItem("组员"));
            ui->tableWidget->setItem(row,1,new QTableWidgetItem(query.value(0).toString()));
            break;
        case 2:
            str = QString("select userName from user where userID = '%1'").arg(team->getMember().at(i).first);
            query.exec(str);
            query.next();
            ui->tableWidget->insertRow(0);
            ui->tableWidget->setItem(0,0,new QTableWidgetItem("组长"));
            ui->tableWidget->setItem(0,1,new QTableWidgetItem(query.value(0).toString()));
            break;
        case 3:
            str = QString("select userName from user where userID = '%1'").arg(team->getMember().at(i).first);
            query.exec(str);
            query.next();
            row1 = ui->tableWidget_2->rowCount();
            ui->tableWidget_2->insertRow(row1);
            ui->tableWidget_2->setItem(row1,0,new QTableWidgetItem("申请中"));
            ui->tableWidget_2->setItem(row1,1,new QTableWidgetItem(query.value(0).toString()));
            break;
        default:
            break;
        }
    }
    query.exec("SET NAMES 'UTF8'");
    db.close();
    int a = ui->tableWidget->rowCount();
    if(a==0);
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<2;j++)
                ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    int b = ui->tableWidget_2->rowCount();
    if(b==0);
    else{
        for(int i=0;i<b;i++){
            for(int j=0;j<2;j++)
                ui->tableWidget_2->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

}

void personalDetails::hideLabel19(){
    ui->label_19->hide();
}
