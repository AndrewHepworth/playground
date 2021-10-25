#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Logger/debugger.h"
#include "MapScaleWidget/mapscalewidget.h"
#include "UndoRedo/undoredo.h"


#include <QUndoStack>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "HELLO";

    MapScaleWidget *scaleBar = new MapScaleWidget();
    scaleBar->Init(ui);

    UndoRedo *undoRedo = new UndoRedo();

    undoRedo->undoStack = new QUndoStack(this);

    undoRedo->createActions();

    undoRedo->createMenus();

    undoRedo->createUndoView();



}

MainWindow::~MainWindow()
{
    delete ui;
}

