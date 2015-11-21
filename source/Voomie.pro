#-------------------------------------------------
#
# Project created by QtCreator 2014-06-08T19:53:27
#
#-------------------------------------------------

QMAKE_CXXFLAGS += -std=c++0x

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Voomie
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp

HEADERS  += dialog.h

FORMS    += dialog.ui

LIBS += -lQtUIUtils
