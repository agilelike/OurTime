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
    int state;

private slots:
    void on_pushButton_3_clicked();

signals:
    void showInformation(int state,int create);

private:
    Ui::createTeam *ui;
};

#endif // CREATETEAM_H
