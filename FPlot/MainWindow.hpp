#ifndef __FP_MAINWINDOW__
#define __FP_MAINWINDOW__

#include <QMainWindow>
#include "PlotArea.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = NULL);
    ~MainWindow();

    void drawFunction(
        double (*plotFunction) (const double&),
        const double& xSize,
        const double& ySize);
    
private:
    PlotArea*    plotArea;
};


#endif
