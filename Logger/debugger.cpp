#include <qlogging.h>
#include "Logger/debugger.h"
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <iostream>
#include <QDebug>


static const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(0);


debugger::debugger()
{

}

void debugger::Init()
{
      QLOGGING_H::qInstallMessageHandler(debugger::RedirectMessageOutput);
}


void debugger::RedirectMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    //Main difference here is that QMutex gets more complex the more exits there are,
    // QMutexLocker can be locked and when the object is destroyed the thread is unlocked.
    QMutex lock;
    QMutexLocker threadLock(&lock);


    QByteArray localMsg = msg.toLocal8Bit();
    const char *file = context.file ? context.file : "";
    const char *function = context.function ? context.function : "";

    QString message;
    QString localMsgString = msg;
    QString fileName = QString::fromLocal8Bit(file);
    QString functionName = QString::fromLocal8Bit(function);
    QString lineNumber = QString::number(context.line);
    QString timeStamp = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QString messageType;

    switch (type) {
    case QtDebugMsg:
        messageType  = "DEBUG";
        break;
    case QtInfoMsg:
        messageType = "INFO";
        break;
    case QtWarningMsg:
        messageType = "WARNING";
        break;
    case QtCriticalMsg:
        messageType = "CRITICAL";
        break;
    case QtFatalMsg:
        messageType = "FATAL";
        abort();
        break;
    }

    threadLock.relock();

    message = QString("%1:%2:%3:%4:L%5:%6").arg(timeStamp, messageType, fileName, functionName, lineNumber, localMsgString);
    fprintf(stderr, message.toLocal8Bit() + "\n");

    QFile outFile(FILE_OUTPUT);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream stream(&outFile);
    stream << message << endl;

    fflush(stderr);
    fflush(stdout);

    threadLock.unlock();

}



//void myMessageHandler(QtMsgType type, const char *msg)
//{
//    QString txt;
//    switch (type) {
//    case QtDebugMsg:
//        txt = QString("Debug: %1").arg(msg);
//        break;
//    case QtWarningMsg:
//        txt = QString("Warning: %1").arg(msg);
//    break;
//    case QtCriticalMsg:
//        txt = QString("Critical: %1").arg(msg);
//    break;
//    case QtFatalMsg:
//        txt = QString("Fatal: %1").arg(msg);
//        abort();
//    }
//    QFile outFile("log");
//    outFile.open(QIODevice::WriteOnly | QIODevice::Append);
//    QTextStream ts(&outFile);
//    ts << txt << endl;
//}

