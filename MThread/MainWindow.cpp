#include "MainWindow.hpp"

MainWindow::MainWindow(
    QWidget *parent)
    :   QMainWindow(parent)
{
    cout << "Creating MThread MainWindow" << endl;
    setWindowTitle(tr("Threading test"));
}

MainWindow::~MainWindow()
{
}

