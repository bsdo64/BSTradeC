//
// Created by 도병수 on 2018. 9. 14..
//

#include <QPushButton>
#include <QVBoxLayout>
#include <iostream>
#include "BSTrade.h"

BSTrade::BSTrade(int &argc, char **argv) :
    app(argc, argv)
{
    app.setStyle("fusion");
    win = new MainWindow();
    m_selector = new ExchangeSelector();
}

BSTrade::~BSTrade()
{
    m_selector->deleteLater();
    delete m_selector;
    win->deleteLater();
    delete win;
}

void BSTrade::start() {
    selectExchange();
    std::cout << "start";
    QApplication::exec();
}

void BSTrade::selectExchange()
{
    connect(m_selector, &QDialog::accepted,
            this, &BSTrade::onSelectExchange);
    connect(m_selector, &QDialog::rejected,
            this, &BSTrade::onQuit);

    m_selector->exec();
}

void BSTrade::onSelectExchange() {
    std::cout << "accept";
    m_selector->deleteLater();
    win->show();
}

int BSTrade::onQuit() {
    std::cout << "quit";
    app.quit();

    m_selector->deleteLater();
    win->deleteLater();
    app.deleteLater();
    delete m_selector;
    return 0;
}

