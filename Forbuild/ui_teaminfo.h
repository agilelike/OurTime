/********************************************************************************
** Form generated from reading UI file 'teaminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMINFO_H
#define UI_TEAMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teaminfo
{
public:
    QFrame *line;
    QCheckBox *checkBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;

    void setupUi(QWidget *teaminfo)
    {
        if (teaminfo->objectName().isEmpty())
            teaminfo->setObjectName(QStringLiteral("teaminfo"));
        teaminfo->resize(1200, 480);
        line = new QFrame(teaminfo);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(485, 0, 10, 480));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        checkBox = new QCheckBox(teaminfo);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(350, 40, 91, 19));
        scrollArea = new QScrollArea(teaminfo);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 80, 485, 400));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 483, 398));
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("background-color: rgb(215, 221, 228);"));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(470, 0, 16, 401));
        verticalScrollBar->setOrientation(Qt::Vertical);
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 50, 345, 120));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(60, 220, 345, 120));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(teaminfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(18);
        label->setFont(font);
        pushButton = new QPushButton(teaminfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(790, 390, 93, 28));
        textEdit = new QTextEdit(teaminfo);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(640, 120, 391, 231));
        label_2 = new QLabel(teaminfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(831, 50, 101, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setFrameShadow(QFrame::Sunken);
        comboBox = new QComboBox(teaminfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(940, 50, 111, 22));
        label_3 = new QLabel(teaminfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(530, 30, 151, 31));
        label_3->setFont(font);

        retranslateUi(teaminfo);

        QMetaObject::connectSlotsByName(teaminfo);
    } // setupUi

    void retranslateUi(QWidget *teaminfo)
    {
        teaminfo->setWindowTitle(QApplication::translate("teaminfo", "Form", Q_NULLPTR));
        checkBox->setText(QApplication::translate("teaminfo", "\346\214\211\344\272\272\345\210\206\347\261\273", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("teaminfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2019 10.9 11\357\274\23230</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	\344\273\212\346\227\24521:00\350\201\232\351\244\220</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		From teamleader</p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("teaminfo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2019 11.30 10\357\274\23200</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	\345\233\275\347\240\264\345\261\261\346\262\263\345\234\250</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	\345\237\216\346\230\245\350\215\211\346\234\250\346\267\261</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		From \345\260\217\351\273\221<"
                        "/p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("teaminfo", "\345\233\242\351\230\237\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teaminfo", "\345\217\221\351\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("teaminfo", "\345\217\221\351\200\201\345\257\271\350\261\241\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("teaminfo", "teamleader", Q_NULLPTR)
         << QApplication::translate("teaminfo", "\345\260\217\351\273\221", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("teaminfo", "\345\217\221\351\200\201\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teaminfo: public Ui_teaminfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMINFO_H
