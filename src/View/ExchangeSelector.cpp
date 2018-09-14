//
// Created by 도병수 on 2018. 9. 14..
//

#include "ExchangeSelector.h"
#include "ui_ExchangeSelector.h"

ExchangeSelector::ExchangeSelector(QWidget *parent):
    QDialog(parent),
    ui(new Ui::ExchangeSelector)
{
    ui->setupUi(this);
}

ExchangeSelector::~ExchangeSelector() {
    delete ui;
}

void ExchangeSelector::onSetMessage(bool triggered) {

}
