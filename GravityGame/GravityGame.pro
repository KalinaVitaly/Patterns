QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gamelogic.cpp \
    heavypointbuilder.cpp \
    iobjectbuilder.cpp \
    itemsettingsdialog.cpp \
    main.cpp \
    objectdirector.cpp \
    objectitem.cpp \
    planetbuilder.cpp \
    scene.cpp \
    widget.cpp

HEADERS += \
    StorageVariable.h \
    gamelogic.h \
    heavypointbuilder.h \
    iobjectbuilder.h \
    itemsettingsdialog.h \
    objectdirector.h \
    objectitem.h \
    planetbuilder.h \
    scene.h \
    widget.h

FORMS += \
    itemsettingsdialog.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
