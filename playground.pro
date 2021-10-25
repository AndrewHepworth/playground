QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Logger/debugger.cpp \
    MapScaleWidget/mapscalewidget.cpp \
    UndoRedo/commands/textcommand.cpp \
    UndoRedo/undoredo.cpp \
    diagram/arrow.cpp \
    diagram/diagramitem.cpp \
    diagram/diagramscene.cpp \
    diagram/diagramtextitem.cpp \
    main.cpp \
    mainwindow.cpp \

HEADERS += \
    Logger/debugger.h \
    MapScaleWidget/mapscalewidget.h \
    UndoRedo/commands/textcommand.h \
    UndoRedo/undoredo.h \
    diagram/arrow.h \
    diagram/diagramitem.h \
    diagram/diagramscene.h \
    diagram/diagramtextitem.h \
    mainwindow.h \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \

RESOURCES += \
    image.qrc

DISTFILES += \
    images/background1.png \
    images/background2.png \
    images/background3.png \
    images/background4.png \
    images/bold.png \
    images/bringtofront.png \
    images/delete.png \
    images/floodfill.png \
    images/italic.png \
    images/linecolor.png \
    images/linepointer.png \
    images/pointer.png \
    images/sendtoback.png \
    images/textpointer.png \
    images/underline.png
