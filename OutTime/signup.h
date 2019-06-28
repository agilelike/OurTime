#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "BaseWindow.h"
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

private:
    void initTitleBar();
    Ui::signup *ui;
};

#endif // SIGNUP_H
