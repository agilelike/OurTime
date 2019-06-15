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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QPushButton *Button1;
    QLabel *time;
    QLabel *time_value;
    QPushButton *Button2;

    void setupUi(QWidget *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QStringLiteral("Desktop"));
        Desktop->resize(450, 600);
        Desktop->setMinimumSize(QSize(450, 600));
        Desktop->setMaximumSize(QSize(450, 600));
        Desktop->setBaseSize(QSize(450, 600));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        Desktop->setFont(font);
        Button1 = new QPushButton(Desktop);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(400, 555, 40, 40));
        time = new QLabel(Desktop);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(20, 10, 50, 25));
        time_value = new QLabel(Desktop);
        time_value->setObjectName(QStringLiteral("time_value"));
        time_value->setGeometry(QRect(70, 10, 120, 25));
        Button2 = new QPushButton(Desktop);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(20, 560, 90, 30));

        retranslateUi(Desktop);

        QMetaObject::connectSlotsByName(Desktop);
    } // setupUi

    void retranslateUi(QWidget *Desktop)
    {
        Desktop->setWindowTitle(QApplication::translate("Desktop", "Widget", Q_NULLPTR));
        Button1->setText(QApplication::translate("Desktop", "\344\270\252\344\272\272", Q_NULLPTR));
        time->setText(QApplication::translate("Desktop", "time:", Q_NULLPTR));
        time_value->setText(QApplication::translate("Desktop", "time_value", Q_NULLPTR));
        Button2->setText(QApplication::translate("Desktop", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
