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
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

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
        line->setGeometry(QRect(580, 0, 16, 481));
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
        pushButton_2->setGeometry(QRect(1090, 417, 93, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(personalDetails);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 221, 151));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/58ece79b36818.png);"));
        label_6 = new QLabel(personalDetails);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 200, 221, 151));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/58ece79b36818.png);"));
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
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QApplication::translate("personalDetails", "\347\225\252\350\214\204\351\222\237\350\265\260\345\212\277\345\233\276", Q_NULLPTR));
        label_8->setText(QApplication::translate("personalDetails", "\346\257\217\345\221\250\346\227\245\345\277\227\347\273\237\350\256\241\345\233\276", Q_NULLPTR));
        label_9->setText(QApplication::translate("personalDetails", "\346\200\273\350\256\241\344\275\277\347\224\250\347\225\252\350\214\204\351\222\237\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("personalDetails", "\346\200\273\350\256\241\346\227\245\345\277\227\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("personalDetails", "100", Q_NULLPTR));
        label_12->setText(QApplication::translate("personalDetails", "10", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personalDetails: public Ui_personalDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALDETAILS_H
