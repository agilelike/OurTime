#include "edittable.h"
#include "ui_edittable.h"

editTable::editTable(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::editTable)
{
    initTitleBar();
    ui->setupUi(this);
}

editTable::~editTable()
{
    delete ui;
}
void editTable::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("Edit Table"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
void editTable::makeEdit()
{
    this->show();
}
