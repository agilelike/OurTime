#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <QDialog>

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

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

signals:
    void showInformation(int state,bool create);
    void showCreateTeam(int state);

private:
    Ui::personalDetails *ui;  
};

#endif // PERSONALDETAILS_H
