#include(../deliveries/deliveries.pro)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

# Scott Meyers Effective C++ series of books
#QMAKE_CXXFLAGS += -Weffc++

SOURCES += \
        main.cpp \
        private/CServer.cpp
		
HEADERS += \
        CServer.h
