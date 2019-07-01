/********************************************************************************
** Form generated from reading UI file 'showid.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWID_H
#define UI_SHOWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showID
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *showID)
    {
        if (showID->objectName().isEmpty())
            showID->setObjectName(QStringLiteral("showID"));
        showID->resize(400, 300);
        label = new QLabel(showID);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 110, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\271\274\345\234\206\";"));
        label_2 = new QLabel(showID);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\271\274\345\234\206\";"));
        pushButton = new QPushButton(showID);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 180, 93, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));

        retranslateUi(showID);

        QMetaObject::connectSlotsByName(showID);
    } // setupUi

    void retranslateUi(QWidget *showID)
    {
        showID->setWindowTitle(QApplication::translate("showID", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("showID", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("showID", "\346\202\250\347\232\204\350\264\246\345\217\267\346\230\257\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("showID", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class showID: public Ui_showID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWID_H
