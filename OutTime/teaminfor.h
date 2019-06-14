#ifndef TEAMINFOR_H
#define TEAMINFOR_H

#include <QWidget>

namespace Ui {
class teaminfor;
}

class teaminfor : public QWidget
{
    Q_OBJECT

public:
    explicit teaminfor(QWidget *parent = 0);
    ~teaminfor();

private:
    Ui::teaminfor *ui;
};

#endif // TEAMINFOR_H
