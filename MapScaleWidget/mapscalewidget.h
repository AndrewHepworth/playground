#ifndef MAPSCALEWIDGET_H
#define MAPSCALEWIDGET_H

#include <QFrame>
#include <QLayout>
#include <QMainWindow>

#include "mainwindow.h"


class MapScaleWidget
{
public:
    MapScaleWidget();

    void Init(Ui::MainWindow *ui);


private:


    void CreateLine(int xCoord, int yCoord, int width, int height);

    QFrame *m_leftVerticalLine;

    QFrame *m_rightVerticalLine;

    QFrame *m_mapScrollBar;

    Ui::MainWindow *m_ui;
};

#endif // MAPSCALEWIDGET_H
