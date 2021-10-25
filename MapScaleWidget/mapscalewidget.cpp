#include "MapScaleWidget/mapscalewidget.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"


MapScaleWidget::MapScaleWidget()
{
    m_leftVerticalLine = nullptr;
    m_rightVerticalLine = nullptr;
    m_mapScrollBar = nullptr;
    m_ui = nullptr;
}

void MapScaleWidget::Init(Ui::MainWindow *ui)
{
    this->m_ui = ui;
    this->m_ui->scaleBar->setStyleSheet("border: 1px solid red");
    this->CreateLine(1,1,1,1);


}

void MapScaleWidget::CreateLine(int xCoord, int yCoord, int width, int height )
{
//   QFrame *line = new QFrame(this->m_ui->scaleBar);

        //Left Map Scale Vertical Bar
//        this->m_ui->scaleBar-



        m_leftVerticalLine = new QFrame(this->m_ui->scaleBar);
        m_leftVerticalLine->setObjectName(QStringLiteral("leftVerticalLine"));
        m_leftVerticalLine->setGeometry(QRect(0, 0, 5, 20));
        m_leftVerticalLine->setMinimumSize(QSize(5,20));
        m_leftVerticalLine->setMaximumSize(QSize(5, 20));
        m_leftVerticalLine->setFrameShape(QFrame::VLine);
        m_leftVerticalLine->setStyleSheet("border: 1px solid black");
//        m_leftVerticalLine->setFrameShadow(QFrame::Sunken);

        //Right Map Scale Vertical Bar
        m_rightVerticalLine = new QFrame(this->m_ui->scaleBar);
        m_rightVerticalLine->setObjectName(QStringLiteral("rightVerticalLine"));
        //100 -5 -> Essentially its mapScrollBar's width minus this widgets width
        m_rightVerticalLine->setGeometry(QRect(95,0,5,20));
        m_rightVerticalLine->setMinimumSize(QSize(5, 20));
        m_rightVerticalLine->setMaximumSize(QSize(5, 20));
        m_rightVerticalLine->setFrameShape(QFrame::VLine);
        m_rightVerticalLine->setStyleSheet("border: 1px solid black");

        //Central Map Scale bar -> This is better off being drawn first
        // so that the other dependant frames can be drawn from this
        m_mapScrollBar = new QFrame(this->m_ui->scaleBar);
        m_mapScrollBar->setObjectName(QStringLiteral("mapScaleBar"));
        m_mapScrollBar->setGeometry(QRect(0, 20, 100, 5));
        m_mapScrollBar->setMinimumSize(QSize(100, 5));
        m_mapScrollBar->setMaximumSize(QSize(100, 5));
        m_mapScrollBar->setFrameShape(QFrame::HLine);
        m_mapScrollBar->setStyleSheet("border: 1px solid blue");



}
