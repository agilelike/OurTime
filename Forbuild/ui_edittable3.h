/********************************************************************************
** Form generated from reading UI file 'edittable3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLE3_H
#define UI_EDITTABLE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edittable3
{
public:
    QLabel *label_2;
    QCheckBox *checkBox;
    QLabel *label_3;
    QPushButton *pushButton;
    QTimeEdit *timeEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QTimeEdit *timeEdit_2;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QDateEdit *dateEdit;

    void setupUi(QWidget *edittable3)
    {
        if (edittable3->objectName().isEmpty())
            edittable3->setObjectName(QStringLiteral("edittable3"));
        edittable3->resize(400, 300);
        label_2 = new QLabel(edittable3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 72, 21));
        checkBox = new QCheckBox(edittable3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(140, 190, 111, 21));
        label_3 = new QLabel(edittable3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 72, 21));
        pushButton = new QPushButton(edittable3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 230, 93, 28));
        timeEdit = new QTimeEdit(edittable3);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(140, 130, 118, 22));
        timeEdit->setMaximumTime(QTime(21, 0, 0));
        timeEdit->setMinimumTime(QTime(8, 0, 0));
        label = new QLabel(edittable3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 72, 21));
        pushButton_2 = new QPushButton(edittable3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 230, 93, 28));
        label_4 = new QLabel(edittable3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 160, 72, 21));
        timeEdit_2 = new QTimeEdit(edittable3);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(140, 160, 118, 22));
        timeEdit_2->setMaximumTime(QTime(21, 0, 0));
        timeEdit_2->setMinimumTime(QTime(8, 0, 0));
        lineEdit_2 = new QLineEdit(edittable3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 100, 160, 21));
        label_5 = new QLabel(edittable3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 190, 72, 21));
        dateEdit = new QDateEdit(edittable3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(140, 70, 110, 22));

        retranslateUi(edittable3);

        QMetaObject::connectSlotsByName(edittable3);
    } // setupUi

    void retranslateUi(QWidget *edittable3)
    {
        edittable3->setWindowTitle(QApplication::translate("edittable3", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("edittable3", "\346\227\245\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        checkBox->setText(QString());
        label_3->setText(QApplication::translate("edittable3", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("edittable3", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("edittable3", "\346\227\245\346\234\237:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("edittable3", "\345\217\226\346\266\210", Q_NULLPTR));
        label_4->setText(QApplication::translate("edittable3", "\347\273\210\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("edittable3", "\345\217\257\346\212\242\345\215\240\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edittable3: public Ui_edittable3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLE3_H
