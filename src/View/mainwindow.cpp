//
// Created by bscom on 2018. 9. 10..
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startAutoConnections() {

}

void MainWindow::mySlot() {

}

