#include "personaldetails.h"
#include "ui_personaldetails.h"
#include <QDebug>
#include<cstdlib>
#include<ctime>

personalDetails::personalDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalDetails)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setColumnWidth(0,90);
    ui->tableWidget->setColumnWidth(1,115);
    QStringList header1;
    header1<<"身份"<<"姓名";
    ui->tableWidget->setHorizontalHeaderLabels(header1);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("组长"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("储成伟"));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("安宇"));
    ui->tableWidget->setItem(2,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(2,1,new QTableWidgetItem("陈镔滨"));
    ui->tableWidget->setItem(3,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(3,1,new QTableWidgetItem("刘晟驰"));
    ui->tableWidget->setItem(4,0,new QTableWidgetItem("组员"));
    ui->tableWidget->setItem(4,1,new QTableWidgetItem("汪江君"));
    int a = ui->tableWidget->rowCount();
    int b = ui->tableWidget->columnCount();
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }

    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget_2->setRowCount(2);
    ui->tableWidget_2->setColumnCount(2);
    ui->tableWidget_2->setColumnWidth(0,90);
    ui->tableWidget_2->setColumnWidth(1,115);
    QStringList header2;
    header2<<"账号"<<"姓名";
    ui->tableWidget_2->setHorizontalHeaderLabels(header2);
    ui->tableWidget_2->setItem(0,0,new QTableWidgetItem("1111"));
    ui->tableWidget_2->setItem(0,1,new QTableWidgetItem("储成伟"));
    ui->tableWidget_2->setItem(1,0,new QTableWidgetItem("2222"));
    ui->tableWidget_2->setItem(1,1,new QTableWidgetItem("安宇"));
    int c = ui->tableWidget->rowCount();
    int d = ui->tableWidget->columnCount();
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++)
            ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }



    image1 = QImage(220,150,QImage::Format_RGB32);
    QColor backColor = qRgb(255,255,255);
    image1.fill(backColor);
    image2 = QImage(220,150,QImage::Format_RGB32);
    image2.fill(backColor);
    PaintImage1();
    PaintImage2();

    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    haveTeam(state);
}

void personalDetails::haveTeam(int state)
{
    switch (state) {
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
        ui->pushButton_2->show();
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
    emit showInformation(state,false);
}

void personalDetails::on_pushButton_2_clicked()
{
    emit showInformation(state,false);
}

void personalDetails::on_pushButton_4_clicked()
{
    emit showCreateTeam(state);
}

void personalDetails::on_pushButton_6_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget->item(row1,1)->text();
        ui->tableWidget_2->removeRow(row1);
        int row2 = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row2);
        ui->tableWidget->setItem(row2,0,new QTableWidgetItem("组员"));
        ui->tableWidget->setItem(row2,1,new QTableWidgetItem(str));
        ui->tableWidget->item(row2,0)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->tableWidget->item(row2,1)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    }
}

void personalDetails::on_pushButton_7_clicked()
{
    bool focus = ui->tableWidget_2->isItemSelected(ui->tableWidget_2->currentItem());
    if(focus){
        int row1 = ui->tableWidget_2->currentItem()->row();
        QString str = ui->tableWidget->item(row1,1)->text();
        ui->tableWidget_2->removeRow(row1);
    }
}

void personalDetails::on_pushButton_5_clicked()
{
    emit showInformation(state,0);
}

void personalDetails::on_pushButton_clicked()
{
    emit showInformation(state,2);
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
