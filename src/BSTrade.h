//
// Created by 도병수 on 2018. 9. 14..
//

#ifndef BSTRADEC_BSTRADE_H
#define BSTRADEC_BSTRADE_H


#include <QApplication>
#include <QDialog>
#include <View/MainWindow.h>
#include <View/ExchangeSelector.h>

class BSTrade: public QObject {
    Q_OBJECT
public:
    BSTrade(int &argc, char **argv);
    ~BSTrade();
    void selectExchange();
    void onSelectExchange();
    int onQuit();
    void start();
private:
    QApplication app;
    MainWindow *win;
    ExchangeSelector *m_selector;
};


#endif //BSTRADEC_BSTRADE_H
