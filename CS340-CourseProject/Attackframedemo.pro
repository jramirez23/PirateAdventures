#-------------------------------------------------
#
# Project created by QtCreator 2013-10-02T12:10:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Attackframedemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    attackmove.cpp \
    Character.cpp \
    Enemy.cpp \
    bomber.cpp \
    cannon.cpp \
    hunter.cpp \
    shotgun.cpp \
    xgun.cpp \
    attacklist.cpp

HEADERS  += mainwindow.h \
    attackmove.h \
    Character.h \
    Enemy.h \
    bomber.h \
    cannon.h \
    hunter.h \
    shotgun.h \
    xgun.h \
    attacklist.h

FORMS    += mainwindow.ui
