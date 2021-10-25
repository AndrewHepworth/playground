#ifndef DEBUGGER_H
#define DEBUGGER_H

#define FILE_OUTPUT "test"

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMutexLocker>

class debugger
{
public:
    debugger();

    void Init();

    void static RedirectMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);
private:

    bool m_outputToFile;

    bool m_outputToConsole;

    std::string m_fileName;
};

#endif // DEBUGGER_H
