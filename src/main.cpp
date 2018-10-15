#include <QApplication>
#include <QMainWindow>
#include <iostream>

#include "App/MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow win;
    win.show();

    QApplication::exec();

    return 0;
}
