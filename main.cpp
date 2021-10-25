#include "mainwindow.h"

#include <QApplication>

#include <qapplication.h>
#include <stdio.h>
#include <stdlib.h>

#include "Logger/debugger.h"


int main(int argc, char *argv[])
{
    debugger *logger = new debugger();
    logger->Init();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
