#-------------------------------------------------
#
# Project created by QtCreator 2013-11-25T19:17:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PirateAdventure
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    worldmap.cpp \
    maphero.cpp \
    pause.cpp\
    attacklist.cpp \
    attackmove.cpp \
    bomber.cpp \
    brokengun.cpp \
    brokenshot.cpp \
    cannon.cpp \
    character.cpp \
    enemy.cpp \
    hookslash.cpp \
    hunter.cpp \
    swordslash.cpp \
    swordsman.cpp \
    xgun.cpp \
    battlepause.cpp\
    mapenemy.cpp \
    attackframe.cpp \
    skeleton.cpp \
    shotgun.cpp \
    animitems.cpp

HEADERS  += mainwindow.h \
    worldmap.h \
    maphero.h \
    pause.h\
    attacklist.h \
    attackmove.h \
    bomber.h \
    brokengun.h \
    brokenshot.h \
    cannon.h \
    character.h \
    enemy.h \
    hookslash.h \
    hunter.h \
    swordslash.h \
    swordsman.h \
    xgun.h \
    battlepause.h\
    mapenemy.h \
    attackframe.h \
    skeleton.h \
    shotgun.h \
    animitems.h

FORMS    += mainwindow.ui \
    worldmap.ui \
    pause.ui \
    battlepause.ui \
    attackframe.ui

RESOURCES += \
    images.qrc
