#ifndef EDITTABLE2_H
#define EDITTABLE2_H

#include <QWidget>
#include <BaseWindow.h>
namespace Ui {
class edittable2;
}

class edittable2 : public BaseWindow
{
    Q_OBJECT

public:
    explicit edittable2(QWidget *parent = 0);
    ~edittable2();
public slots:
    void makeEdit();
private:
    Ui::edittable2 *ui;
    void initTitleBar();
};

#endif // EDITTABLE2_H
