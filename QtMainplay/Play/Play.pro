#-------------------------------------------------
#
# Project created by QtCreator 2020-07-07T10:27:47
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += multimediawidgets
QT       +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Play
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    ../../QtPlay/PlayPicture.qrc
