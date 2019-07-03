#ifndef TEAMINFO_H
#define TEAMINFO_H

#include <QWidget>
#include"message.h"

namespace Ui {
class teaminfo;
}

class teaminfo : public QWidget
{
    Q_OBJECT

public:
    explicit teaminfo(QWidget *parent = 0);
    ~teaminfo();
    int findID(QString username);
    QString findname(int userID);
    void judge();
    void update();
    void showmessage();
    Message readMessage(int i);
private slots:
    void on_pushButton_clicked();

private:
    Ui::teaminfo *ui;
};

#endif // TEAMINFO_H
