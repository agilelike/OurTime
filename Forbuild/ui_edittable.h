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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editTable
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *editTable)
    {
        if (editTable->objectName().isEmpty())
            editTable->setObjectName(QStringLiteral("editTable"));
        editTable->resize(400, 300);
        label = new QLabel(editTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 72, 15));
        label_2 = new QLabel(editTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 72, 15));
        label_3 = new QLabel(editTable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 72, 15));
        label_4 = new QLabel(editTable);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 190, 72, 15));
        lineEdit = new QLineEdit(editTable);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 171, 21));
        lineEdit_2 = new QLineEdit(editTable);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 110, 171, 21));
        lineEdit_3 = new QLineEdit(editTable);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 150, 171, 21));
        lineEdit_4 = new QLineEdit(editTable);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 190, 171, 21));
        pushButton = new QPushButton(editTable);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 240, 93, 28));
        pushButton_2 = new QPushButton(editTable);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 240, 93, 28));

        retranslateUi(editTable);

        QMetaObject::connectSlotsByName(editTable);
    } // setupUi

    void retranslateUi(QWidget *editTable)
    {
        editTable->setWindowTitle(QApplication::translate("editTable", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("editTable", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("editTable", "\347\273\210\346\255\242\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("editTable", "\345\206\205\345\256\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("editTable", "\351\207\215\350\246\201\346\200\247", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editTable", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("editTable", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editTable: public Ui_editTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLE_H
