#ifndef UNDOREDO_H
#define UNDOREDO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QFrame>
#include <QUndoStack>
#include <QUndoView>

#include "mainwindow.h"

class UndoRedo
{
public:
    UndoRedo();

    void createActions();

    void createMenus();

    void createUndoView();

    QAction *deleteAction = nullptr;

    QAction *addBoxAction = nullptr;

    QAction *addTriangleAction = nullptr;

    QAction *undoAction = nullptr;

    QAction *redoAction = nullptr;

    QAction *exitAction = nullptr;

    QAction *aboutAction = nullptr;

    QMenu *fileMenu = nullptr;

    QMenu *editMenu = nullptr;

    QMenu *itemMenu = nullptr;

    QMenu *helpMenu = nullptr;

    Ui::MainWindow *m_ui = nullptr;

    QUndoStack *undoStack = nullptr;

    QUndoView *undoView = nullptr;

public slots:
    void itemMoved(QFrame *movedDiagram, const QPointF &moveStartPosition);

private slots:
    void deleteItem();

    void addBox();

    void addTriangle();

    void about();

    void itemMenuAboutToShow();

    void itemMenuAboutToHide();

private:

//    void createActions();

//    void createMenus();

//    void createUndoView();

//    QAction *deleteAction = nullptr;

//    QAction *addBoxAction = nullptr;

//    QAction *addTriangleAction = nullptr;

//    QAction *undoAction = nullptr;

//    QAction *redoAction = nullptr;

//    QAction *exitAction = nullptr;

//    QAction *aboutAction = nullptr;

//    QMenu *fileMenu = nullptr;

//    QMenu *editMenu = nullptr;

//    QMenu *itemMenu = nullptr;

//    QMenu *helpMenu = nullptr;

//    Ui::MainWindow *m_ui = nullptr;

//    QUndoStack *undoStack = nullptr;

//    QUndoView *undoView = nullptr;


};

#endif // UNDOREDO_H
