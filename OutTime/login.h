#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "BaseWindow.h"
namespace Ui {
class login;
}

class login : public BaseWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_2_clicked();
signals:
    void showsignup();
private:
    void initTitleBar();
    Ui::login *ui;
};

#endif // LOGIN_H
