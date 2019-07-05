#ifndef TEAMINFO_H
#define TEAMINFO_H

#include <QWidget>
#include "message.h"
#include <QVBoxLayout>

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
    Message readMessage(int i);
    void setcombo();
private slots:
    void on_pushButton_clicked();
    void showmessage();

private:
    Ui::teaminfo *ui;
    QVBoxLayout *pLayout;
};

#endif // TEAMINFO_H
