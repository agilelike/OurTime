/********************************************************************************
** Form generated from reading UI file 'createteam.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEAM_H
#define UI_CREATETEAM_H

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

class Ui_createTeam
{
public:
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label_13;

    void setupUi(QWidget *createTeam)
    {
        if (createTeam->objectName().isEmpty())
            createTeam->setObjectName(QStringLiteral("createTeam"));
        createTeam->resize(500, 160);
        pushButton_3 = new QPushButton(createTeam);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 90, 191, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(createTeam);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 20, 311, 31));
        lineEdit->setStyleSheet(QStringLiteral("font: 14pt \"Verdana\";"));
        label_13 = new QLabel(createTeam);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 20, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));

        retranslateUi(createTeam);

        QMetaObject::connectSlotsByName(createTeam);
    } // setupUi

    void retranslateUi(QWidget *createTeam)
    {
        createTeam->setWindowTitle(QApplication::translate("createTeam", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("createTeam", "\345\210\233\345\273\272\345\233\242\351\230\237", Q_NULLPTR));
        label_13->setText(QApplication::translate("createTeam", "\345\233\242\351\230\237\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createTeam: public Ui_createTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEAM_H