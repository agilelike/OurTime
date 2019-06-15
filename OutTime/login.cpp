#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    BaseWindow(parent),
    ui(new Ui::login)
{
    initTitleBar();
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    this->hide();
    emit showsignup();
}

void login::initTitleBar()
{
    m_titleBar->setBackgroundColor(40,70,85);
    m_titleBar->setTitleContent(QStringLiteral("OurTime!"));
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}

