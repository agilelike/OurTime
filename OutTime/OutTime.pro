#-------------------------------------------------
#
# Project created by QtCreator 2019-06-13T13:18:56
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OutTime
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    journal.cpp \
    personaldetails.cpp\
    BaseTitleBar.cpp \
    BaseWindow.cpp \
    information.cpp \
    login.cpp \
    signup.cpp \
    teaminfo.cpp \
    timetable.cpp \
    edittable.cpp \
    desktop.cpp \
    edittable2.cpp

HEADERS  += mainwindow.h \
    journal.h \
    login.h \
    signup.h\
    personaldetails.h\
    BaseTitleBar.h \
    BaseWindow.h \
    information.h \
    teaminfo.h \
    timetable.h \
    edittable.h \
    desktop.h \
    edittable2.h \
    pschedule.h

FORMS    += mainwindow.ui \
    journal.ui \
    personaldetails.ui \
    information.ui \
    login.ui \
    signup.ui \
    teaminfo.ui \
    timetable.ui \
    edittable.ui \
    desktop.ui \
    edittable2.ui

RESOURCES += \
    image.qrc\
    resource.qrc

