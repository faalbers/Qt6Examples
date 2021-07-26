#include "MainWindow.hpp"

MainWindow::MainWindow(
    QWidget *parent)
    :   QMainWindow(parent), plotArea(NULL)
{
    setWindowTitle(tr("Function Plotter"));

    plotArea = new PlotArea;
    
    setCentralWidget(plotArea);
}

MainWindow::~MainWindow()
{
    delete(plotArea);
}

void MainWindow::drawFunction(
    double (*plotFunction) (const double&),
    const double& xSize,
    const double& ySize)
{
    plotArea->drawFunction(plotFunction, xSize, ySize);
}

