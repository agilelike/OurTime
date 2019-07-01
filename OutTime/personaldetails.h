#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <QDialog>
#include<QPaintEvent>
#include<QtGui>

namespace Ui {
class personalDetails;
}

class personalDetails : public QDialog
{
    Q_OBJECT

public:
    explicit personalDetails(QWidget *parent = 0);
    int state = 0;
    void haveTeam(int state);
    ~personalDetails();
    void PaintImage1();
    void PaintImage2();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();


protected:
    void paintEvent(QPaintEvent *){
        QPainter painter(this);
        painter.drawImage(20,200,image1);
        painter.drawImage(310,200,image2);
    }

signals:
    void showInformation(int state,int create);
    void showCreateTeam(int state);

private:
    Ui::personalDetails *ui;  
    QImage image1;
    QImage image2;
};

#endif // PERSONALDETAILS_H
