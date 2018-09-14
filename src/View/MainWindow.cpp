//
// Created by bscom on 2018. 9. 10..
//

#include <iostream>
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage(tr("Welcome"));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onSetMessage(bool triggered) {
    ui->statusbar->showMessage("haha");
}

