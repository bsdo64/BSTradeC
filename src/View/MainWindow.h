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
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

protected slots:
    void onSetMessage(bool triggered);

    void wheelEvent(QWheelEvent *event) override;
};


#endif //BSTRADE_MAINWINDOW_H
