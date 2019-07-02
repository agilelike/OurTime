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
    void haveTeam();
    ~personalDetails();
    void PaintImage1();
    void PaintImage2();
    void showMember();
    void hideLabel19();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();


protected:
    void paintEvent(QPaintEvent *);

signals:
    void showInformation();
    void showCreateTeam();

private:
    Ui::personalDetails *ui;  
    QImage image1;
    QImage image2;
};

#endif // PERSONALDETAILS_H
