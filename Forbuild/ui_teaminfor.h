/********************************************************************************
** Form generated from reading UI file 'teaminfor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMINFOR_H
#define UI_TEAMINFOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teaminfor
{
public:
    QFrame *line;
    QLabel *label;
    QCheckBox *checkBox;
    QTextEdit *textEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QWidget *teaminfor)
    {
        if (teaminfor->objectName().isEmpty())
            teaminfor->setObjectName(QStringLiteral("teaminfor"));
        teaminfor->resize(1200, 480);
        line = new QFrame(teaminfor);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(470, 0, 20, 480));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setBold(true);
        font.setWeight(75);
        line->setFont(font);
        line->setFrameShadow(QFrame::Sunken);
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        label = new QLabel(teaminfor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 15, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        checkBox = new QCheckBox(teaminfor);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(300, 20, 131, 19));
        textEdit = new QTextEdit(teaminfor);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(600, 170, 491, 211));
        scrollArea = new QScrollArea(teaminfor);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 50, 471, 431));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 469, 429));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(450, 0, 16, 421));
        verticalScrollBar->setOrientation(Qt::Vertical);
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 40, 271, 87));
        plainTextEdit_2 = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(90, 180, 271, 87));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(teaminfor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(800, 420, 93, 28));
        label_2 = new QLabel(teaminfor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 50, 101, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(teaminfor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(810, 50, 72, 15));
        comboBox = new QComboBox(teaminfor);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(880, 50, 141, 22));

        retranslateUi(teaminfor);

        QMetaObject::connectSlotsByName(teaminfor);
    } // setupUi

    void retranslateUi(QWidget *teaminfor)
    {
        teaminfor->setWindowTitle(QApplication::translate("teaminfor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("teaminfor", "\345\233\242\351\230\237\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("teaminfor", "\346\214\211\345\217\221\351\200\201\344\272\272\346\216\222\345\272\217", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("teaminfor", "2019.6.14  22\357\274\23204\n"
"    \344\275\240\345\246\210\345\226\212\344\275\240\345\233\236\345\256\266\345\220\203\351\245\255\n"
"\n"
"            From\357\274\232teamleader", Q_NULLPTR));
        plainTextEdit_2->setPlainText(QApplication::translate("teaminfor", "2019.6.14  23.10\n"
"   \344\272\224\346\216\222\357\274\214\345\277\253\344\270\212\345\217\267\n"
"\n"
"	    From\357\274\232\345\260\217\351\273\221", Q_NULLPTR));
        pushButton->setText(QApplication::translate("teaminfor", "\345\217\221\351\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("teaminfor", "\345\233\242\351\230\237\346\266\210\346\201\257\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("teaminfor", "\346\224\266\344\273\266\344\272\272\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("teaminfor", "teamleader", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class teaminfor: public Ui_teaminfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMINFOR_H
