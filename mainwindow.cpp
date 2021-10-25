#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Logger/debugger.h"
#include "MapScaleWidget/mapscalewidget.h"
#include "UndoRedo/undoredo.h"
#include "diagram/diagramscene.h"


#include <QUndoStack>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    editMenu = menuBar()->addMenu(tr("&Edit"));

    MapScaleWidget *scaleBar = new MapScaleWidget();
    scaleBar->Init(ui);

    UndoRedo *undoRedo = new UndoRedo();

    undoRedo->undoStack = new QUndoStack(this);

    undoRedo->createActions(this->ui->centralwidget);

    undoRedo->createMenus(this->ui->textEditor,this->ui->redoButton, this->ui->undoButton );
    undoRedo->createUndoView();






}

MainWindow::~MainWindow()
{
    delete ui;
}

