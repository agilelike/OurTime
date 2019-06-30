#include "signup.h"
#include "ui_signup.h"

signup::signup(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::signup)
{
    initTitleBar();
    ui->setupUi(this);
}

void signup::receivelogin()
{
    this->show();
}


signup::~signup()
{
    delete ui;
}

void signup::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}
