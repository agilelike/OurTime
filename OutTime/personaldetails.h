#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <QDialog>

namespace Ui {
class personalDetails;
}

class personalDetails : public QDialog
{
    Q_OBJECT

public:
    explicit personalDetails(QWidget *parent = 0);
    ~personalDetails();

private:
    Ui::personalDetails *ui;
};

#endif // PERSONALDETAILS_H
