#include "timetable.h"
#include "ui_timetable.h"

TimeTable::TimeTable(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::TimeTable)
{
    initTitleBar();
    ui->setupUi(this);
}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
