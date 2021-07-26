#include <QApplication>
#include <iostream>

#include "MainWindow.hpp"
#include "ThreadDialog.hpp"

using namespace std;

int main(int argv, char **args)
{
    cout << "Running mthread dialog" << endl;
    QApplication app(argv, args);
    ThreadDialog TDialog;
    TDialog.show();
    return app.exec();
}

