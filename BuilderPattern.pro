QT += core
QT -= gui

CONFIG += c++11

TARGET = BuilderPattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    product.h \
    builder.h \
    concrete_bulider.h \
    director.h
