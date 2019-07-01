/********************************************************************************
** Form generated from reading UI file 'personaldetails.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALDETAILS_H
#define UI_PERSONALDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_personalDetails
{
public:
    QLabel *label;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_3;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_4;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_5;
    QLabel *label_18;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *personalDetails)
    {
        if (personalDetails->objectName().isEmpty())
            personalDetails->setObjectName(QStringLiteral("personalDetails"));
        personalDetails->resize(1200, 480);
        label = new QLabel(personalDetails);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 81, 21));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_3 = new QLabel(personalDetails);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(820, 50, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        textBrowser = new QTextBrowser(personalDetails);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(940, 40, 231, 41));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(220, 220, 220);"));
        textBrowser_2 = new QTextBrowser(personalDetails);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(150, 40, 111, 41));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);\n"
"font: 14pt \"\345\256\213\344\275\223\";"));
        line = new QFrame(personalDetails);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(575, 0, 20, 480));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(personalDetails);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        line_2 = new QFrame(personalDetails);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 90, 551, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(personalDetails);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(600, 90, 581, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(personalDetails);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1040, 130, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        tableWidget = new QTableWidget(personalDetails);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(930, 170, 250, 200));
        tableWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        pushButton = new QPushButton(personalDetails);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 40, 93, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(personalDetails);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1090, 420, 93, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_7 = new QLabel(personalDetails);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 380, 131, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_8 = new QLabel(personalDetails);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 380, 151, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\271\274\345\234\206\";"));
        label_9 = new QLabel(personalDetails);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 430, 211, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        label_10 = new QLabel(personalDetails);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(340, 430, 131, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        label_11 = new QLabel(personalDetails);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(230, 430, 51, 31));
        label_11->setStyleSheet(QStringLiteral("font: 16pt \"Verdana\";"));
        label_12 = new QLabel(personalDetails);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(470, 430, 72, 31));
        label_12->setStyleSheet(QStringLiteral("font: 16pt \"Verdana\";"));
        pushButton_3 = new QPushButton(personalDetails);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(800, 330, 191, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_13 = new QLabel(personalDetails);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(690, 260, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        lineEdit = new QLineEdit(personalDetails);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(800, 260, 311, 31));
        lineEdit->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        label_14 = new QLabel(personalDetails);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(760, 120, 291, 41));
        label_14->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_15 = new QLabel(personalDetails);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(770, 170, 221, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        pushButton_4 = new QPushButton(personalDetails);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1070, 40, 111, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_16 = new QLabel(personalDetails);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(740, 200, 281, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        label_17 = new QLabel(personalDetails);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(720, 230, 301, 31));
        label_17->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\256\213\344\275\223\";"));
        pushButton_5 = new QPushButton(personalDetails);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(930, 420, 93, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_18 = new QLabel(personalDetails);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(710, 120, 71, 41));
        label_18->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\256\213\344\275\223\";"));
        tableWidget_2 = new QTableWidget(personalDetails);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(620, 170, 250, 200));
        tableWidget_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        pushButton_6 = new QPushButton(personalDetails);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(620, 420, 93, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_7 = new QPushButton(personalDetails);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(780, 420, 93, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(personalDetails);

        QMetaObject::connectSlotsByName(personalDetails);
    } // setupUi

    void retranslateUi(QDialog *personalDetails)
    {
        personalDetails->setWindowTitle(QApplication::translate("personalDetails", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("personalDetails", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("personalDetails", "\345\233\242\351\230\237\345\220\215\357\274\232", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("personalDetails", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\350\277\205\346\215\267\345\246\202\351\243\216\347\232\204\350\257\276\350\256\276\345\260\217\347\273\204</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("personalDetails", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\231\210\351\225\224\346\273\250</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("personalDetails", "\346\225\260\346\215\256\347\273\237\350\256\241\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("personalDetails", "\345\233\242\351\230\237\346\210\220\345\221\230\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("personalDetails", "\346\263\250\351\224\200", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("personalDetails", "\351\200\200\345\207\272\345\233\242\351\230\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("personalDetails", "\347\225\252\350\214\204\351\222\237\350\265\260\345\212\277\345\233\276", Q_NULLPTR));
        label_8->setText(QApplication::translate("personalDetails", "\346\257\217\345\221\250\346\227\245\345\277\227\347\273\237\350\256\241\345\233\276", Q_NULLPTR));
        label_9->setText(QApplication::translate("personalDetails", "\346\200\273\350\256\241\344\275\277\347\224\250\347\225\252\350\214\204\351\222\237\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("personalDetails", "\346\200\273\350\256\241\346\227\245\345\277\227\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("personalDetails", "100", Q_NULLPTR));
        label_12->setText(QApplication::translate("personalDetails", "10", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("personalDetails", "\347\224\263\350\257\267\345\212\240\345\205\245", Q_NULLPTR));
        label_13->setText(QApplication::translate("personalDetails", "\345\233\242\351\230\237\345\217\267\357\274\232", Q_NULLPTR));
        label_14->setText(QApplication::translate("personalDetails", "\346\202\250\350\277\230\346\234\252\345\212\240\345\205\245\344\273\273\344\275\225\345\233\242\351\230\237\357\274\201", Q_NULLPTR));
        label_15->setText(QApplication::translate("personalDetails", "\345\277\253\345\212\240\345\205\245/\345\210\233\345\273\272\345\233\242\351\230\237\345\220\247\357\274\201", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("personalDetails", "\345\210\233\345\273\272\345\233\242\351\230\237", Q_NULLPTR));
        label_16->setText(QApplication::translate("personalDetails", "\347\224\263\350\257\267\345\267\262\345\217\221\345\207\272\357\274\214\350\257\267\350\200\220\345\277\203\347\255\211\345\276\205\357\274\201", Q_NULLPTR));
        label_17->setText(QApplication::translate("personalDetails", "\357\274\2102\345\244\251\345\206\205\346\262\241\346\234\211\346\216\245\345\217\227\357\274\214\345\217\257\351\207\215\346\226\260\347\224\263\350\257\267\357\274\211", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("personalDetails", "\350\247\243\346\225\243\345\233\242\351\230\237", Q_NULLPTR));
        label_18->setText(QApplication::translate("personalDetails", "\347\224\263\350\257\267\344\272\272", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("personalDetails", "\345\220\214\346\204\217", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("personalDetails", "\346\213\222\347\273\235", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personalDetails: public Ui_personalDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALDETAILS_H
