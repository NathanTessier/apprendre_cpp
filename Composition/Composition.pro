TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CapteurHumidite.cpp \
        Vanne.cpp \
        ZoneArrosage.cpp \
        main.cpp

HEADERS += \
    CapteurHumidite.h \
    Vanne.h \
    ZoneArrosage.h
