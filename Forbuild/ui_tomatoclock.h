/********************************************************************************
** Form generated from reading UI file 'tomatoclock.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMATOCLOCK_H
#define UI_TOMATOCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_tomatoClock
{
public:
    QLabel *current_clock;
    QLabel *tomato_number;
    QLabel *task_value;
    QLabel *tomatoNum;
    QLabel *remained_time;
    QLabel *state;

    void setupUi(QDialog *tomatoClock)
    {
        if (tomatoClock->objectName().isEmpty())
            tomatoClock->setObjectName(QStringLiteral("tomatoClock"));
        tomatoClock->resize(420, 480);
        current_clock = new QLabel(tomatoClock);
        current_clock->setObjectName(QStringLiteral("current_clock"));
        current_clock->setGeometry(QRect(10, 10, 150, 20));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        font.setPointSize(10);
        current_clock->setFont(font);
        tomato_number = new QLabel(tomatoClock);
        tomato_number->setObjectName(QStringLiteral("tomato_number"));
        tomato_number->setGeometry(QRect(10, 35, 150, 20));
        tomato_number->setFont(font);
        task_value = new QLabel(tomatoClock);
        task_value->setObjectName(QStringLiteral("task_value"));
        task_value->setGeometry(QRect(160, 10, 250, 20));
        task_value->setFont(font);
        tomatoNum = new QLabel(tomatoClock);
        tomatoNum->setObjectName(QStringLiteral("tomatoNum"));
        tomatoNum->setGeometry(QRect(160, 35, 250, 20));
        tomatoNum->setFont(font);
        remained_time = new QLabel(tomatoClock);
        remained_time->setObjectName(QStringLiteral("remained_time"));
        remained_time->setGeometry(QRect(145, 210, 130, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        remained_time->setFont(font1);
        remained_time->setAlignment(Qt::AlignCenter);
        state = new QLabel(tomatoClock);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(145, 270, 130, 40));
        state->setFont(font1);
        state->setAlignment(Qt::AlignCenter);

        retranslateUi(tomatoClock);

        QMetaObject::connectSlotsByName(tomatoClock);
    } // setupUi

    void retranslateUi(QDialog *tomatoClock)
    {
        tomatoClock->setWindowTitle(QApplication::translate("tomatoClock", "Dialog", Q_NULLPTR));
        current_clock->setText(QApplication::translate("tomatoClock", "current task:", Q_NULLPTR));
        tomato_number->setText(QApplication::translate("tomatoClock", "tomato number:", Q_NULLPTR));
        task_value->setText(QApplication::translate("tomatoClock", "TextLabel", Q_NULLPTR));
        tomatoNum->setText(QApplication::translate("tomatoClock", "TextLabel", Q_NULLPTR));
        remained_time->setText(QApplication::translate("tomatoClock", "29:59", Q_NULLPTR));
        state->setText(QApplication::translate("tomatoClock", "work", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tomatoClock: public Ui_tomatoClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMATOCLOCK_H
