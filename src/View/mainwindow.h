//
// Created by bscom on 2018. 9. 10..
//

#ifndef BSTRADE_MAINWINDOW_H
#define BSTRADE_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void startAutoConnections();

private:
    Ui::MainWindow *ui;

protected slots:
    void mySlot();
};


#endif //BSTRADE_MAINWINDOW_H