#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>

namespace Ui {
class information;
}

class information : public QDialog
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = 0);
    ~information();
    void receivePersonalDetails();

private slots:
    void on_pushButton_clicked();

signals:
    void showPersonalDetails();
    void showLogin();
    void hideMain();

private:
    Ui::information *ui;
    int create;
};

#endif // INFORMATION_H
