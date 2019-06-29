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
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *pushButton_4;

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
        pushButton->setGeometry(QRect(130, 310, 93, 28));
        pushButton_2 = new QPushButton(TimeTable);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 360, 93, 28));
        pushButton_3 = new QPushButton(TimeTable);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 410, 93, 28));
        commandLinkButton = new QCommandLinkButton(TimeTable);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(50, 40, 187, 41));
        commandLinkButton_2 = new QCommandLinkButton(TimeTable);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(50, 110, 187, 41));
        label_2 = new QLabel(TimeTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(880, 380, 20, 40));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 255);"));
        label_3 = new QLabel(TimeTable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(940, 420, 45, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_4 = new QLabel(TimeTable);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(860, 420, 60, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_5 = new QLabel(TimeTable);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(950, 380, 20, 40));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        label_6 = new QLabel(TimeTable);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(850, 350, 72, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_7 = new QLabel(TimeTable);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1020, 130, 140, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";\n"
""));
        label_8 = new QLabel(TimeTable);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(910, 130, 72, 15));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_9 = new QLabel(TimeTable);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(910, 210, 72, 15));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_10 = new QLabel(TimeTable);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1020, 210, 140, 15));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_11 = new QLabel(TimeTable);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(910, 250, 72, 15));
        label_11->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_12 = new QLabel(TimeTable);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1020, 250, 140, 15));
        label_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_13 = new QLabel(TimeTable);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(910, 170, 72, 15));
        label_13->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_14 = new QLabel(TimeTable);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(1020, 170, 140, 15));
        label_14->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_15 = new QLabel(TimeTable);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(950, 90, 101, 16));
        label_15->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_16 = new QLabel(TimeTable);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(910, 290, 81, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_17 = new QLabel(TimeTable);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(1020, 290, 140, 15));
        label_17->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_18 = new QLabel(TimeTable);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1000, 420, 71, 20));
        label_18->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_19 = new QLabel(TimeTable);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(1020, 380, 20, 40));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        label_20 = new QLabel(TimeTable);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(1074, 420, 71, 20));
        label_20->setStyleSheet(QString::fromUtf8("font: 9pt \"\347\255\211\347\272\277\";"));
        label_21 = new QLabel(TimeTable);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1090, 380, 20, 40));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));
        pushButton_4 = new QPushButton(TimeTable);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 260, 93, 28));

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
        label_2->setText(QString());
        label_3->setText(QApplication::translate("TimeTable", "\345\217\257\346\212\242\345\215\240", Q_NULLPTR));
        label_4->setText(QApplication::translate("TimeTable", "\344\270\215\345\217\257\346\212\242\345\215\240", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("TimeTable", "\345\233\276\344\276\213\350\257\264\346\230\216\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("TimeTable", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("TimeTable", "\346\227\245\346\234\237", Q_NULLPTR));
        label_9->setText(QApplication::translate("TimeTable", "\350\265\267\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_10->setText(QApplication::translate("TimeTable", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("TimeTable", "\347\273\210\346\255\242\346\227\266\351\227\264", Q_NULLPTR));
        label_12->setText(QApplication::translate("TimeTable", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("TimeTable", "\346\227\245\347\250\213\345\220\215", Q_NULLPTR));
        label_14->setText(QApplication::translate("TimeTable", "TextLabel", Q_NULLPTR));
        label_15->setText(QApplication::translate("TimeTable", "\346\227\245\347\250\213\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        label_16->setText(QApplication::translate("TimeTable", "\346\230\257\345\220\246\345\217\257\346\212\242\345\215\240", Q_NULLPTR));
        label_17->setText(QApplication::translate("TimeTable", "TextLabel", Q_NULLPTR));
        label_18->setText(QApplication::translate("TimeTable", "\345\233\242\351\230\237\346\227\245\347\250\213", Q_NULLPTR));
        label_19->setText(QString());
        label_20->setText(QApplication::translate("TimeTable", "\345\233\242\351\230\237\344\273\273\345\212\241", Q_NULLPTR));
        label_21->setText(QString());
        pushButton_4->setText(QApplication::translate("TimeTable", "\346\267\273\345\212\240\344\273\273\345\212\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimeTable: public Ui_TimeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLE_H
