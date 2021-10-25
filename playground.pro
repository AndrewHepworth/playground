QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/arrow.cpp \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramitem.cpp \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramscene.cpp \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramtextitem.cpp \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/main.cpp \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/mainwindow.cpp \
    Logger/debugger.cpp \
    MapScaleWidget/mapscalewidget.cpp \
    UndoRedo/undoredo.cpp \
    main.cpp \
    mainwindow.cpp \

HEADERS += \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/arrow.h \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramitem.h \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramscene.h \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramtextitem.h \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/mainwindow.h \
    Logger/debugger.h \
    MapScaleWidget/mapscalewidget.h \
    UndoRedo/undoredo.h \
    mainwindow.h \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramscene.pro

RESOURCES += \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramscene.qrc

DISTFILES += \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/diagramscene.exe \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/background1.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/background2.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/background3.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/background4.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/bold.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/bringtofront.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/delete.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/floodfill.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/italic.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/linecolor.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/linepointer.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/pointer.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/sendtoback.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/textpointer.png \
    ../../../../../../../../../Qt/qt-5.5.0-x64-mingw510r0-seh-rev0/qt-5.5.0-x64-mingw510r0-seh-rev0/examples/widgets/graphicsview/diagramscene/images/underline.png
