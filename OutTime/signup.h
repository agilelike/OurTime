#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "BaseWindow.h"
#include <QStringList>
#include <QSqlQuery>
namespace Ui {
class signup;
}

class signup : public BaseWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = 0);
    ~signup();
private slots:
    void receivelogin();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void showLogin();
    void showID(int id);

private:
    void initTitleBar();
    Ui::signup *ui;
};

#endif // SIGNUP_H
