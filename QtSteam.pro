#-------------------------------------------------
#
# Project created by QtCreator 2011-12-14T17:01:58
#
#-------------------------------------------------

QT       += core gui

TARGET = QtSteam
TEMPLATE = app


SOURCES += main.cpp\
        qtsteammainwindow.cpp \
    state.cpp \
    qsteamstate.cpp

HEADERS  += qtsteammainwindow.h \
    state.h \
    qsteamstate.h

FORMS    += qtsteammainwindow.ui

RESOURCES += \
    ResourcesQtSteam.qrc


LIBS    += -L/usr/include/freesteam/    -lfreesteam



