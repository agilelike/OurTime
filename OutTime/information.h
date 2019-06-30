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
    void receivePersonalDetails(int state,int create);
    int state = 0;
    int create;
    ~information();

private slots:
    void on_pushButton_clicked();

signals:
    void showPersonalDetails(int state);
    void showLogin();
    void hideMain();

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
