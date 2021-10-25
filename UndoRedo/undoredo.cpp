#include "undoredo.h"
#include "commands/textcommand.h"

#include <QAction>
#include <QSignalMapper>
//#include <QTranslator>

UndoRedo::UndoRedo()
{

//    undoStack = new QUndoStack(this);
}


void UndoRedo::createUndoView()
{
    undoView = new QUndoView(undoStack);
    undoView->setWindowTitle("Command List");
    undoView->show();
    undoView->setAttribute(Qt::WA_QuitOnClose, false);

}

void UndoRedo::createActions(QWidget *widget)
{
    QString form = "&Delete Item";
    this->deleteAction = new QAction(form, this);
    deleteAction->setShortcut(tr("Del"));

    //Stuff to be done Ie CRUD operations


    //Actions Undo
    undoAction = undoStack->createUndoAction(this, tr("&Undo"));
    undoAction->setShortcut(QKeySequence::Undo);

    //Redo Action
    redoAction = undoStack->createRedoAction(this, tr("&Redo"));
    redoAction->setShortcut(QKeySequence::Redo);

    widget->addAction(redoAction);
    widget->addAction(undoAction);

}

void UndoRedo::createMenus(QLineEdit *textBox, QPushButton *redoButton,QPushButton *undoButton)
{
//    textBox->addAction(undoAction);
//    textBox->addAction(redoAction);
//    editMenu->addAction(undoAction);
//    editMenu->addAction(redoAction);


//    redoButton->addAction(redoAction);
//    undoButton->addAction(undoAction);
    QObject::connect(redoButton, &QPushButton::clicked, [this]{RedoActionButton();});
    QObject::connect(undoButton, &QPushButton::clicked, [this]{UndoActionButton();});

    QString oldText = textBox->text();
//    connect(textBox, SIGNAL(textEdited(QString)), this, SLOT(printDebug()));
    QObject::connect(textBox, &QLineEdit::textEdited, [this, textBox, oldText](){textHasChanged(textBox, oldText);});
}

void UndoRedo::printDebug()
{
    qDebug("Text Has Changed!!");
}

void UndoRedo::textHasChanged(QLineEdit *textBox, QString oldText)
{
    undoStack->push(new TextCommand(textBox, textBox->text()));
    std::string output = "added new to stack: " + textBox->text().toStdString() + ", Stack Size" + std::to_string(undoStack->count());
    qDebug(output.c_str());
}

void UndoRedo::RedoActionButton()
{
    undoStack->redo();
}

void UndoRedo::UndoActionButton()
{
    undoStack->undo();
}
