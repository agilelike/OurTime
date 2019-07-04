/********************************************************************************
** Form generated from reading UI file 'edittable4.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLE4_H
#define UI_EDITTABLE4_H

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

class Ui_edittable4
{
public:
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *edittable4)
    {
        if (edittable4->objectName().isEmpty())
            edittable4->setObjectName(QStringLiteral("edittable4"));
        edittable4->resize(400, 300);
        timeEdit = new QTimeEdit(edittable4);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(160, 100, 118, 22));
        timeEdit->setMaximumTime(QTime(21, 0, 0));
        timeEdit->setMinimumTime(QTime(8, 0, 0));
        label_3 = new QLabel(edittable4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 70, 72, 21));
        lineEdit = new QLineEdit(edittable4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 130, 201, 21));
        pushButton = new QPushButton(edittable4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 230, 93, 28));
        pushButton_2 = new QPushButton(edittable4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 230, 93, 28));
        dateEdit = new QDateEdit(edittable4);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(160, 70, 110, 22));
        label_2 = new QLabel(edittable4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 130, 72, 21));
        label = new QLabel(edittable4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 100, 72, 21));

        retranslateUi(edittable4);

        QMetaObject::connectSlotsByName(edittable4);
    } // setupUi

    void retranslateUi(QWidget *edittable4)
    {
        edittable4->setWindowTitle(QApplication::translate("edittable4", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("edittable4", "\346\210\252\346\255\242\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("edittable4", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("edittable4", "\345\217\226\346\266\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("edittable4", "\344\273\273\345\212\241\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("edittable4", "\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edittable4: public Ui_edittable4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLE4_H
