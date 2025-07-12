QMAKE_PROJECT_DEPTH = 0

QT += core gui
Qt += svg
Qt += sql
QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

include($$PWD/window/window.pri)
include($$PWD/lib/lib.pri)

RESOURCES += \
    res.qrc

DISTFILES += \
    res/arrow_right.svg
