TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ../lib/starship.cpp \
    ../lib/module.cpp

HEADERS += \
    ../lib/starship.h \
    ../lib/module.h

