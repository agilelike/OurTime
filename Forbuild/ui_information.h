/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName(QStringLiteral("information"));
        information->resize(400, 300);
        label = new QLabel(information);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 110, 311, 41));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\271\274\345\234\206\";"));
        pushButton = new QPushButton(information);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 200, 93, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(information);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 110, 141, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\271\274\345\234\206\";"));

        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QDialog *information)
    {
        information->setWindowTitle(QApplication::translate("information", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("information", "\347\224\263\350\257\267\345\217\221\345\207\272\357\274\214\350\257\267\350\200\220\345\277\203\347\255\211\345\276\205\357\274\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("information", "\347\241\256\350\256\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("information", "\351\200\200\345\207\272\346\210\220\345\212\237\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
