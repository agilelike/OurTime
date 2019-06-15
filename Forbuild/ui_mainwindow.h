/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QFrame *line;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 600);
        MainWindow->setMinimumSize(QSize(999, 0));
        commandLinkButton = new QCommandLinkButton(MainWindow);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(90, 70, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        commandLinkButton->setFont(font);
        commandLinkButton->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\345\275\251\344\272\221\";"));
        commandLinkButton_2 = new QCommandLinkButton(MainWindow);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(310, 70, 101, 61));
        commandLinkButton_2->setFont(font);
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\345\275\251\344\272\221\";"));
        commandLinkButton_3 = new QCommandLinkButton(MainWindow);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(620, 70, 111, 51));
        commandLinkButton_3->setFont(font);
        commandLinkButton_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\345\275\251\344\272\221\";"));
        commandLinkButton_4 = new QCommandLinkButton(MainWindow);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(890, 70, 187, 51));
        commandLinkButton_4->setFont(font);
        commandLinkButton_4->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\345\275\251\344\272\221\";"));
        line = new QFrame(MainWindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 120, 1200, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "\345\233\242\351\230\237", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("MainWindow", "\346\227\245\347\250\213", Q_NULLPTR));
        commandLinkButton_3->setText(QApplication::translate("MainWindow", "\346\227\245\345\277\227", Q_NULLPTR));
        commandLinkButton_4->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
