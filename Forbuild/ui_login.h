/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(458, 365);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 280, 93, 28));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 280, 93, 28));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 140, 211, 21));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 210, 211, 21));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 130, 31, 31));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Image/account.png);"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 200, 31, 31));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/Image/password.png);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/login/\347\224\250\346\210\267\345\233\276\346\240\207.png")));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 60, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(20);
        label_3->setFont(font);
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 250, 271, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\232\266\344\271\246\";"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("login", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("login", "Ourtime", Q_NULLPTR));
        label_4->setText(QApplication::translate("login", "(\347\224\250\346\210\267\345\220\215\346\210\226\345\257\206\347\240\201\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\350\257\225!)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
