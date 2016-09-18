#-------------------------------------------------
#
# Project created by QtCreator 2013-08-23T10:43:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EditableItems
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    baseitem.cpp \
    editorscene.cpp \
    basicshapeitem.cpp \
    handle.cpp \
    complexshapeitem.cpp

HEADERS  += mainwindow.h \
    baseitem.h \
    editorscene.h \
    basicshapeitem.h \
    handle.h \
    complexshapeitem.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
