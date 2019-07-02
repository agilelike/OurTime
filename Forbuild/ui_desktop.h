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
    QLabel *label;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_10;
    QPushButton *start_tomato;
    QLabel *label_20;
    QLabel *time_value_2;

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
        time_value->setGeometry(QRect(120, 10, 211, 25));
        Button2 = new QPushButton(Desktop);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(20, 560, 90, 30));
        label = new QLabel(Desktop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 410, 20));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(100, 100, 100);"));
        label_11 = new QLabel(Desktop);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 265, 410, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_12 = new QLabel(Desktop);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 290, 410, 20));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_2 = new QLabel(Desktop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 410, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(100, 100, 100);"));
        label_5 = new QLabel(Desktop);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 165, 410, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_8 = new QLabel(Desktop);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 240, 410, 20));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_6 = new QLabel(Desktop);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 190, 410, 20));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_3 = new QLabel(Desktop);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 115, 410, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(100, 100, 100);"));
        label_7 = new QLabel(Desktop);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 215, 410, 20));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_4 = new QLabel(Desktop);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 410, 20));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_16 = new QLabel(Desktop);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 365, 410, 20));
        label_16->setFont(font);
        label_16->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_14 = new QLabel(Desktop);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 465, 410, 20));
        label_14->setFont(font);
        label_14->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_15 = new QLabel(Desktop);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 415, 410, 20));
        label_15->setFont(font);
        label_15->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_19 = new QLabel(Desktop);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 515, 410, 20));
        label_19->setFont(font);
        label_19->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_17 = new QLabel(Desktop);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 490, 410, 20));
        label_17->setFont(font);
        label_17->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_18 = new QLabel(Desktop);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 390, 410, 20));
        label_18->setFont(font);
        label_18->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_9 = new QLabel(Desktop);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 315, 410, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_13 = new QLabel(Desktop);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 440, 410, 20));
        label_13->setFont(font);
        label_13->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_10 = new QLabel(Desktop);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 340, 410, 20));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        start_tomato = new QPushButton(Desktop);
        start_tomato->setObjectName(QStringLiteral("start_tomato"));
        start_tomato->setGeometry(QRect(390, 20, 31, 31));
        label_20 = new QLabel(Desktop);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 35, 91, 25));
        time_value_2 = new QLabel(Desktop);
        time_value_2->setObjectName(QStringLiteral("time_value_2"));
        time_value_2->setGeometry(QRect(120, 35, 211, 25));

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
        label->setText(QApplication::translate("Desktop", "6:00~6:30       wake up", Q_NULLPTR));
        label_11->setText(QApplication::translate("Desktop", "13:00~14:00   noon break", Q_NULLPTR));
        label_12->setText(QApplication::translate("Desktop", "14:00~15:30   CE6", Q_NULLPTR));
        label_2->setText(QApplication::translate("Desktop", "6:30~7:00       wash and rinse", Q_NULLPTR));
        label_5->setText(QApplication::translate("Desktop", "9:30~11:00     code interface", Q_NULLPTR));
        label_8->setText(QApplication::translate("Desktop", "12:30~13:00   ONE PUNCH", Q_NULLPTR));
        label_6->setText(QApplication::translate("Desktop", "11:00~12:00   CET6      ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Desktop", "7:00~8:00       have a breakfast", Q_NULLPTR));
        label_7->setText(QApplication::translate("Desktop", "12:00~12:30   have a lunch", Q_NULLPTR));
        label_4->setText(QApplication::translate("Desktop", "8:00~9:30       computer network", Q_NULLPTR));
        label_16->setText(QApplication::translate("Desktop", "18:00~18:30  have a dinner", Q_NULLPTR));
        label_14->setText(QApplication::translate("Desktop", "21:30~22:30  computer network", Q_NULLPTR));
        label_15->setText(QApplication::translate("Desktop", "19:00~20:00  rest&have a walk", Q_NULLPTR));
        label_19->setText(QApplication::translate("Desktop", "23:00~23:30  wash&rinse", Q_NULLPTR));
        label_17->setText(QApplication::translate("Desktop", "22:30~23:00  reading", Q_NULLPTR));
        label_18->setText(QApplication::translate("Desktop", "18;30~19:00  ONE PUNCH", Q_NULLPTR));
        label_9->setText(QApplication::translate("Desktop", "15:30~17:00   computer network", Q_NULLPTR));
        label_13->setText(QApplication::translate("Desktop", "20:00~21:30  code interface", Q_NULLPTR));
        label_10->setText(QApplication::translate("Desktop", "17:00~18:00   code interface", Q_NULLPTR));
        start_tomato->setText(QApplication::translate("Desktop", "\347\225\252\350\214\204", Q_NULLPTR));
        label_20->setText(QApplication::translate("Desktop", "teamTask:", Q_NULLPTR));
        time_value_2->setText(QApplication::translate("Desktop", "\347\224\265\350\257\235\344\274\232\350\256\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
