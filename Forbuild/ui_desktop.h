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
    QPushButton *start_tomato;
    QLabel *label_20;
    QLabel *time_value_2;
    QLabel *label_mes;
    QLabel *label;
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
        Desktop->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font:bold;\n"
"    color:rgb(0,0,0);\n"
"    min-height:20;\n"
"    border-style:solid;                                                	\n"
"    border-top-left-radius:2px;\n"
"    border-top-right-radius:2px;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2:1, y2: 1,stop:0 rgba(255, 255, 255, 200),stop:1 rgba(200,200,200,175)); \n"
"	border:1px solid rgbA(200,200,200 ,150); \n"
"	border-radius:7px;\n"
"	padding:2px 4px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:1,stop:0 rgba(200,200,200,175), stop:1 rgba(255, 255, 255, 200));\n"
"	border:1px solid rgba(200,200,200 ,150);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(200,200,200);\n"
"	border:1px solid rgbA(200 ,200,200,150);\n"
"}"));
        Button1 = new QPushButton(Desktop);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(380, 554, 42, 42));
        Button1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font:bold;\n"
"	font-size:16px;\n"
"    color:rgb(0,0,0);\n"
"    min-height:20;\n"
"    border-style:solid;                                                	\n"
"    border-top-left-radius:2px;\n"
"    border-top-right-radius:2px;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2:1, y2: 1,stop:0 rgba(255, 255, 255, 200),stop:1 rgba(200,200,200,175)); \n"
"	border:1px solid rgbA(200,200,200,150); \n"
"	border-radius:21px;\n"
"	padding:2px 4px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:1,stop:0 rgba(200,200,200,175), stop:1 rgba(255, 255, 255, 200));\n"
"	border:1px solid rgba(200,200,200 ,150);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(200,200,200);\n"
"	border:1px solid rgbA(200 ,200,200,150);\n"
"}"));
        time = new QLabel(Desktop);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(20, 10, 50, 25));
        time_value = new QLabel(Desktop);
        time_value->setObjectName(QStringLiteral("time_value"));
        time_value->setGeometry(QRect(120, 10, 211, 25));
        Button2 = new QPushButton(Desktop);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(20, 560, 90, 30));
        Button2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	font:bold;\n"
"    color:rgb(0,0,0);\n"
"    min-height:20;\n"
"    border-style:solid;                                                	\n"
"    border-top-left-radius:2px;\n"
"    border-top-right-radius:2px;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2:1, y2: 1,stop:0 rgba(255, 255, 255, 200),stop:1 rgba(200,200,200,175)); \n"
"	border:1px solid rgbA(200,200,200 ,150); \n"
"	border-radius:7px;\n"
"	padding:2px 4px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:1,stop:0 rgba(200,200,200,175), stop:1 rgba(255, 255, 255, 200));\n"
"	border:1px solid rgba(200,200,200 ,150);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:rgb(200,200,200);\n"
"	border:1px solid rgbA(200 ,200,200,150);\n"
"}\n"
""));
        start_tomato = new QPushButton(Desktop);
        start_tomato->setObjectName(QStringLiteral("start_tomato"));
        start_tomato->setGeometry(QRect(390, 20, 31, 31));
        start_tomato->setStyleSheet(QStringLiteral(""));
        label_20 = new QLabel(Desktop);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 35, 91, 25));
        time_value_2 = new QLabel(Desktop);
        time_value_2->setObjectName(QStringLiteral("time_value_2"));
        time_value_2->setGeometry(QRect(120, 35, 211, 25));
        label_mes = new QLabel(Desktop);
        label_mes->setObjectName(QStringLiteral("label_mes"));
        label_mes->setGeometry(QRect(100, 550, 21, 20));
        label_mes->setStyleSheet(QStringLiteral("border-image: url(:/Image/bulb.png);"));
        label = new QLabel(Desktop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 350, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        label->setFont(font1);
        label_2 = new QLabel(Desktop);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 350, 30));
        label_2->setFont(font1);
        label_3 = new QLabel(Desktop);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 350, 30));
        label_3->setFont(font1);
        label_4 = new QLabel(Desktop);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 170, 350, 30));
        label_4->setFont(font1);
        label_5 = new QLabel(Desktop);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 200, 350, 30));
        label_5->setFont(font1);
        label_6 = new QLabel(Desktop);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 230, 350, 30));
        label_6->setFont(font1);
        label_7 = new QLabel(Desktop);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 260, 350, 30));
        label_7->setFont(font1);
        label_8 = new QLabel(Desktop);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 290, 350, 30));
        label_8->setFont(font1);
        label_9 = new QLabel(Desktop);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 320, 350, 30));
        label_9->setFont(font1);
        label_10 = new QLabel(Desktop);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 350, 350, 30));
        label_10->setFont(font1);
        label_11 = new QLabel(Desktop);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 380, 350, 30));
        label_11->setFont(font1);
        label_12 = new QLabel(Desktop);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 410, 350, 30));
        label_12->setFont(font1);
        label_13 = new QLabel(Desktop);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 440, 350, 30));
        label_13->setFont(font1);
        label_14 = new QLabel(Desktop);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 470, 350, 30));
        label_14->setFont(font1);

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
        start_tomato->setText(QString());
        label_20->setText(QApplication::translate("Desktop", "teamTask:", Q_NULLPTR));
        time_value_2->setText(QApplication::translate("Desktop", "\347\224\265\350\257\235\344\274\232\350\256\256", Q_NULLPTR));
        label_mes->setText(QString());
        label->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("Desktop", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
