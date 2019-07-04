/********************************************************************************
** Form generated from reading UI file 'edittable2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLE2_H
#define UI_EDITTABLE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edittable2
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QDateEdit *dateEdit;

    void setupUi(QWidget *edittable2)
    {
        if (edittable2->objectName().isEmpty())
            edittable2->setObjectName(QStringLiteral("edittable2"));
        edittable2->resize(400, 300);
        label = new QLabel(edittable2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 120, 72, 21));
        label_2 = new QLabel(edittable2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 150, 72, 21));
        pushButton = new QPushButton(edittable2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 250, 93, 28));
        pushButton_2 = new QPushButton(edittable2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 250, 93, 28));
        lineEdit = new QLineEdit(edittable2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 150, 201, 21));
        timeEdit = new QTimeEdit(edittable2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(160, 120, 118, 22));
        timeEdit->setMaximumTime(QTime(21, 0, 0));
        timeEdit->setMinimumTime(QTime(8, 0, 0));
        label_3 = new QLabel(edittable2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 90, 72, 21));
        dateEdit = new QDateEdit(edittable2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(160, 90, 110, 22));

        retranslateUi(edittable2);

        QMetaObject::connectSlotsByName(edittable2);
    } // setupUi

    void retranslateUi(QWidget *edittable2)
    {
        edittable2->setWindowTitle(QApplication::translate("edittable2", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("edittable2", "\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("edittable2", "\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("edittable2", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("edittable2", "\345\217\226\346\266\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("edittable2", "\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edittable2: public Ui_edittable2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLE2_H
