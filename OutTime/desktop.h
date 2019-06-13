#ifndef DESKTOP_H
#define DESKTOP_H
#include<windows.h>
#include <QWidget>

namespace Ui {
class Desktop;
}

class Desktop : public QWidget
{
    Q_OBJECT

public:
    explicit Desktop(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~Desktop();
    HWND findDesktopIconWnd();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
