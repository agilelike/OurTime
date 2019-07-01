#include "edittable2.h"
#include "ui_edittable2.h"

edittable2::edittable2(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::edittable2)
{
    initTitleBar();
    ui->setupUi(this);
}

edittable2::~edittable2()
{
    delete ui;
}
void edittable2::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
void edittable2::makeEdit()
{
    this->show();
}
