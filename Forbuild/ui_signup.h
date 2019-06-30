/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QStringLiteral("signup"));
        signup->resize(452, 313);
        label = new QLabel(signup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 90, 72, 15));
        label_2 = new QLabel(signup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 150, 72, 15));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 210, 72, 15));
        lineEdit = new QLineEdit(signup);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 90, 113, 21));
        lineEdit_2 = new QLineEdit(signup);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 150, 113, 21));
        lineEdit_3 = new QLineEdit(signup);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 210, 113, 21));
        label_4 = new QLabel(signup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 40, 231, 31));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        pushButton = new QPushButton(signup);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 260, 90, 30));
        pushButton_2 = new QPushButton(signup);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 260, 90, 30));
        pushButton_2->setStyleSheet(QStringLiteral(""));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QApplication::translate("signup", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("signup", "\347\224\250 \346\210\267 \345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("signup", "\345\257\206    \347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("signup", "\345\206\215\346\254\241\347\241\256\350\256\244\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("signup", "\345\210\233\345\273\272\344\275\240\350\207\252\345\267\261\347\232\204\344\270\252\344\272\272\347\224\250\346\210\267\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("signup", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("signup", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
