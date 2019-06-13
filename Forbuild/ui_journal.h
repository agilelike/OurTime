/********************************************************************************
** Form generated from reading UI file 'journal.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNAL_H
#define UI_JOURNAL_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_journal
{
public:
    QFrame *line;
    QFrame *line_2;
    QTableWidget *tableWidget;
    QFrame *line_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLabel *label;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QLabel *label_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QLabel *label_3;

    void setupUi(QDialog *journal)
    {
        if (journal->objectName().isEmpty())
            journal->setObjectName(QStringLiteral("journal"));
        journal->resize(1200, 600);
        line = new QFrame(journal);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 1200, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(journal);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(620, 200, 20, 401));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(journal);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 200, 601, 391));
        line_3 = new QFrame(journal);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(50, 190, 1091, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        textEdit = new QTextEdit(journal);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(670, 250, 491, 191));
        pushButton = new QPushButton(journal);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(860, 500, 93, 28));
        toolButton = new QToolButton(journal);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(186, 160, 21, 21));
        toolButton->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/1.png);"));
        toolButton_2 = new QToolButton(journal);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(290, 160, 21, 21));
        toolButton_2->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/2.png);"));
        label = new QLabel(journal);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 150, 61, 41));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        toolButton_3 = new QToolButton(journal);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(630, 160, 21, 21));
        toolButton_3->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/2.png);"));
        toolButton_4 = new QToolButton(journal);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(560, 160, 21, 21));
        toolButton_4->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/1.png);"));
        label_2 = new QLabel(journal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(590, 150, 31, 41));
        label_2->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        toolButton_5 = new QToolButton(journal);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(950, 160, 21, 21));
        toolButton_5->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/2.png);"));
        toolButton_6 = new QToolButton(journal);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(880, 160, 21, 21));
        toolButton_6->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/C:/Users/95414/Desktop/Image/1.png);"));
        label_3 = new QLabel(journal);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(910, 150, 31, 41));
        label_3->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));

        retranslateUi(journal);

        QMetaObject::connectSlotsByName(journal);
    } // setupUi

    void retranslateUi(QDialog *journal)
    {
        journal->setWindowTitle(QApplication::translate("journal", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("journal", "\347\241\256\350\256\244", Q_NULLPTR));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        label->setText(QApplication::translate("journal", "2019", Q_NULLPTR));
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        label_2->setText(QApplication::translate("journal", "06", Q_NULLPTR));
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        label_3->setText(QApplication::translate("journal", "13", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class journal: public Ui_journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
