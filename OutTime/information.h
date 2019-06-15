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
    void receivePersonalDetails(bool team);
    bool team;
    ~information();

private slots:
    void on_pushButton_clicked();

signals:
    void showPersonalDetails(bool team);

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
