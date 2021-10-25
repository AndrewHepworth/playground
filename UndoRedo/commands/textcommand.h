#ifndef TEXTCOMMAND_H
#define TEXTCOMMAND_H

#include <QObject>
#include <QWidget>
#include <QUndoCommand>
#include <QLineEdit>

class TextCommand : public QUndoCommand
{
public:
    enum {Id = 0010};
    TextCommand(QLineEdit *textBox,QString oldText, QUndoCommand *parent = 0);

    void undo() Q_DECL_OVERRIDE;
    void redo() Q_DECL_OVERRIDE;
//    bool mergeWith(const QUndoCommand *command) Q_DECL_OVERRIDE;
    int id() const Q_DECL_OVERRIDE {return Id;}

private:
    QLineEdit *m_textBox;
    QString m_oldText;
    QString m_newText;



};

#endif // TEXTCOMMAND_H
