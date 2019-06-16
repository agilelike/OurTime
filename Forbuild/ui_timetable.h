/********************************************************************************
** Form generated from reading UI file 'timetable.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLE_H
#define UI_TIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeTable
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QWidget *TimeTable)
    {
        if (TimeTable->objectName().isEmpty())
            TimeTable->setObjectName(QStringLiteral("TimeTable"));
        TimeTable->resize(1200, 480);
        label = new QLabel(TimeTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 20, 551, 421));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/personaltable.png);"));
        pushButton = new QPushButton(TimeTable);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(910, 290, 93, 28));
        pushButton_2 = new QPushButton(TimeTable);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 350, 93, 28));
        pushButton_3 = new QPushButton(TimeTable);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(910, 410, 93, 28));
        commandLinkButton = new QCommandLinkButton(TimeTable);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(50, 40, 187, 41));
        commandLinkButton_2 = new QCommandLinkButton(TimeTable);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(50, 110, 187, 41));

        retranslateUi(TimeTable);

        QMetaObject::connectSlotsByName(TimeTable);
    } // setupUi

    void retranslateUi(QWidget *TimeTable)
    {
        TimeTable->setWindowTitle(QApplication::translate("TimeTable", "Form", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TimeTable", "\346\267\273\345\212\240\346\227\245\347\250\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TimeTable", "\347\274\226\350\276\221\346\227\245\347\250\213", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TimeTable", "\345\210\240\351\231\244\346\227\245\347\250\213", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("TimeTable", "\344\270\252\344\272\272\346\227\245\347\250\213\350\241\250", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("TimeTable", "\345\233\242\351\230\237\346\227\245\347\250\213\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimeTable: public Ui_TimeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLE_H
