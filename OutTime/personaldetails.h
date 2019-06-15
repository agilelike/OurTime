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
    bool team = false;
    void haveTeam(bool team);
    ~personalDetails();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

signals:
    void showInformation(bool team);

private:
    Ui::personalDetails *ui;  
};

#endif // PERSONALDETAILS_H
