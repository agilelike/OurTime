/********************************************************************************
** Form generated from reading UI file 'edittable.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLE_H
#define UI_EDITTABLE_H

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

class Ui_editTable
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;
    QLabel *label_5;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit_2;

    void setupUi(QWidget *editTable)
    {
        if (editTable->objectName().isEmpty())
            editTable->setObjectName(QStringLiteral("editTable"));
        editTable->resize(400, 300);
        pushButton = new QPushButton(editTable);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 230, 93, 28));
        pushButton_2 = new QPushButton(editTable);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 230, 93, 28));
        label = new QLabel(editTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 72, 21));
        label_2 = new QLabel(editTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 72, 21));
        lineEdit_2 = new QLineEdit(editTable);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 100, 160, 21));
        label_3 = new QLabel(editTable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 72, 21));
        label_4 = new QLabel(editTable);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 160, 72, 21));
        checkBox = new QCheckBox(editTable);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(140, 190, 111, 21));
        label_5 = new QLabel(editTable);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 190, 72, 21));
        timeEdit = new QTimeEdit(editTable);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(140, 130, 118, 22));
        timeEdit->setMaximumTime(QTime(21, 0, 0));
        timeEdit->setMinimumTime(QTime(8, 0, 0));
        dateEdit = new QDateEdit(editTable);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(140, 70, 110, 22));
        timeEdit_2 = new QTimeEdit(editTable);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(140, 160, 118, 22));
        timeEdit_2->setMaximumTime(QTime(21, 0, 0));
        timeEdit_2->setMinimumTime(QTime(8, 0, 0));

        retranslateUi(editTable);

        QMetaObject::connectSlotsByName(editTable);
    } // setupUi

    void retranslateUi(QWidget *editTable)
    {
        editTable->setWindowTitle(QApplication::translate("editTable", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editTable", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("editTable", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("editTable", "\346\227\245\346\234\237:", Q_NULLPTR));
        label_2->setText(QApplication::translate("editTable", "\346\227\245\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("editTable", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("editTable", "\347\273\210\346\255\242\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        checkBox->setText(QString());
        label_5->setText(QApplication::translate("editTable", "\344\270\215\351\207\215\350\246\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editTable: public Ui_editTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLE_H
