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
    QFrame *line_2;
    QTableWidget *ScheduleView;
    QFrame *line_3;
    QTextEdit *journal_2;
    QPushButton *submission;
    QToolButton *reduceYear;
    QToolButton *increaseYear;
    QLabel *year;
    QToolButton *increaseMonth;
    QToolButton *reduceMonth;
    QLabel *month;
    QToolButton *increaseDay;
    QToolButton *reduceDay;
    QLabel *day;

    void setupUi(QDialog *journal)
    {
        if (journal->objectName().isEmpty())
            journal->setObjectName(QStringLiteral("journal"));
        journal->resize(1200, 480);
        line_2 = new QFrame(journal);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(630, 80, 20, 401));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ScheduleView = new QTableWidget(journal);
        ScheduleView->setObjectName(QStringLiteral("ScheduleView"));
        ScheduleView->setGeometry(QRect(20, 80, 601, 391));
        line_3 = new QFrame(journal);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(60, 70, 1091, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        journal_2 = new QTextEdit(journal);
        journal_2->setObjectName(QStringLiteral("journal_2"));
        journal_2->setGeometry(QRect(680, 130, 491, 191));
        journal_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        submission = new QPushButton(journal);
        submission->setObjectName(QStringLiteral("submission"));
        submission->setGeometry(QRect(870, 380, 93, 31));
        submission->setStyleSheet(QString::fromUtf8("font: 18pt \"\351\232\266\344\271\246\";"));
        reduceYear = new QToolButton(journal);
        reduceYear->setObjectName(QStringLiteral("reduceYear"));
        reduceYear->setGeometry(QRect(196, 40, 21, 21));
        reduceYear->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/1.png);"));
        increaseYear = new QToolButton(journal);
        increaseYear->setObjectName(QStringLiteral("increaseYear"));
        increaseYear->setGeometry(QRect(300, 40, 21, 21));
        increaseYear->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/2.png);"));
        year = new QLabel(journal);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(230, 30, 61, 41));
        year->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        increaseMonth = new QToolButton(journal);
        increaseMonth->setObjectName(QStringLiteral("increaseMonth"));
        increaseMonth->setGeometry(QRect(640, 40, 21, 21));
        increaseMonth->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/2.png);"));
        reduceMonth = new QToolButton(journal);
        reduceMonth->setObjectName(QStringLiteral("reduceMonth"));
        reduceMonth->setGeometry(QRect(570, 40, 21, 21));
        reduceMonth->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/1.png);"));
        month = new QLabel(journal);
        month->setObjectName(QStringLiteral("month"));
        month->setGeometry(QRect(600, 30, 31, 41));
        month->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        increaseDay = new QToolButton(journal);
        increaseDay->setObjectName(QStringLiteral("increaseDay"));
        increaseDay->setGeometry(QRect(960, 40, 21, 21));
        increaseDay->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/2.png);"));
        reduceDay = new QToolButton(journal);
        reduceDay->setObjectName(QStringLiteral("reduceDay"));
        reduceDay->setGeometry(QRect(890, 40, 21, 21));
        reduceDay->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Image/1.png);"));
        day = new QLabel(journal);
        day->setObjectName(QStringLiteral("day"));
        day->setGeometry(QRect(920, 30, 31, 41));
        day->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));

        retranslateUi(journal);

        QMetaObject::connectSlotsByName(journal);
    } // setupUi

    void retranslateUi(QDialog *journal)
    {
        journal->setWindowTitle(QApplication::translate("journal", "Dialog", Q_NULLPTR));
        submission->setText(QApplication::translate("journal", "\346\217\220\344\272\244", Q_NULLPTR));
        reduceYear->setText(QString());
        increaseYear->setText(QString());
        year->setText(QApplication::translate("journal", "2019", Q_NULLPTR));
        increaseMonth->setText(QString());
        reduceMonth->setText(QString());
        month->setText(QApplication::translate("journal", "06", Q_NULLPTR));
        increaseDay->setText(QString());
        reduceDay->setText(QString());
        day->setText(QApplication::translate("journal", "13", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class journal: public Ui_journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
