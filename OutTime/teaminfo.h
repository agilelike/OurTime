#ifndef TEAMINFO_H
#define TEAMINFO_H

#include <QWidget>

namespace Ui {
class teaminfo;
}

class teaminfo : public QWidget
{
    Q_OBJECT

public:
    explicit teaminfo(QWidget *parent = 0);
    ~teaminfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::teaminfo *ui;
};

#endif // TEAMINFO_H
