TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ../lib/starship.cpp \
    ../lib/module.cpp \
    ../lib/effect.cpp \
    ../lib/permanenteffect.cpp

HEADERS += \
    ../lib/starship.h \
    ../lib/module.h \
    ../lib/effect.h \
    ../lib/permanenteffect.h

