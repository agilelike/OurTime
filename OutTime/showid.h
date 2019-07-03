#ifndef SHOWID_H
#define SHOWID_H

#include <QWidget>

namespace Ui {
class showID;
}

class showID : public QWidget
{
    Q_OBJECT

public:
    explicit showID(QWidget *parent = 0);
    ~showID();

private:
    Ui::showID *ui;

signals:
    void showLogin();

private slots:
    void receiveShowID(int id);

    void on_pushButton_clicked();
};


#endif // SHOWID_H
