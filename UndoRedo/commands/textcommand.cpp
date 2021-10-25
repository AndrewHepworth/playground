#include "textcommand.h"

TextCommand::TextCommand(QLineEdit *textBox,QString oldText, QUndoCommand *parent)
    : QUndoCommand(parent)
{
    m_textBox = textBox;
    m_oldText = oldText;
    m_newText = textBox->text();
    setText(QObject::tr("Old String: %1").arg(oldText));
}

void TextCommand::undo()
{
    qDebug("UNDO!");
    m_textBox->setText(m_oldText);
    m_textBox->update();

}

void TextCommand::redo()
{
    m_textBox->setText(m_newText);
    m_textBox->update();
}

//bool TextCommand::mergeWith(const QUndoCommand *command)
//{
//    const TextCommand *textCommand = static_cast<const TextCommand *>(command);
//    QLineEdit *item = textCommand->m_textBox;

//    if(m_textBox != item)
//    {
//        return false;
//    }

//    m_newText = item->text();
//    return true;
//}
