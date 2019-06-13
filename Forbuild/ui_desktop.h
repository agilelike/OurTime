/********************************************************************************
** Form generated from reading UI file 'desktop.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOP_H
#define UI_DESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QPushButton *Button1;

    void setupUi(QWidget *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QStringLiteral("Desktop"));
        Desktop->resize(450, 600);
        Desktop->setMinimumSize(QSize(450, 600));
        Desktop->setMaximumSize(QSize(450, 600));
        Desktop->setBaseSize(QSize(450, 600));
        Button1 = new QPushButton(Desktop);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(370, 530, 60, 60));

        retranslateUi(Desktop);

        QMetaObject::connectSlotsByName(Desktop);
    } // setupUi

    void retranslateUi(QWidget *Desktop)
    {
        Desktop->setWindowTitle(QApplication::translate("Desktop", "Widget", Q_NULLPTR));
        Button1->setText(QApplication::translate("Desktop", "\344\270\252\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
