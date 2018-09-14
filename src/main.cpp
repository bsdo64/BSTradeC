#include <QApplication>
#include <QMainWindow>
#include <iostream>

#include "View/MainWindow.h"
#include "BSTrade.h"

int main(int argc, char *argv[])
{
    BSTrade app(argc, argv);
    app.start();

    return 0;
}