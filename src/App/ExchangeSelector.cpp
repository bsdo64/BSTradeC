//
// Created by 도병수 on 2018. 9. 14..
//

#include <iostream>
#include "ExchangeSelector.h"
#include "MainWindow.h"
#include "ui_ExchangeSelector.h"

ExchangeSelector::ExchangeSelector(QWidget *parent):
    QDialog(parent),
    ui(new Ui::ExchangeSelector)
{
    ui->setupUi(this);

    ui->buttonBox->setDisabled(true);

    connect(ui->listWidget, &QListWidget::itemClicked,
            this, &ExchangeSelector::itemSelected);
    connect(this, &QDialog::accepted,
            this, &ExchangeSelector::openMain);
}

ExchangeSelector::~ExchangeSelector() {
    delete ui;
}

void ExchangeSelector::openMain() {
    qDebug() << "Starting :" << s_item->text();
    auto *win = new MainWindow();
    win->show();
}

void ExchangeSelector::itemSelected(QListWidgetItem *item) {
    s_item = item;
    ui->buttonBox->setDisabled(false);
}

void ExchangeSelector::wheelEvent(QWheelEvent *event) {
    QWidget::wheelEvent(event);
}
