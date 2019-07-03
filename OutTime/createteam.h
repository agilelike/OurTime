#ifndef CREATETEAM_H
#define CREATETEAM_H

#include <QWidget>

namespace Ui {
class createTeam;
}

class createTeam : public QWidget
{
    Q_OBJECT

public:
    explicit createTeam(QWidget *parent = 0);
    ~createTeam();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

signals:
    void showInformation();
    void showPersonalDetails();

private:
    Ui::createTeam *ui;
};

#endif // CREATETEAM_H
