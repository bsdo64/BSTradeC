//
// Created by 도병수 on 2018. 9. 14..
//

#ifndef BSTRADEC_EXCHANGESELECTOR_H
#define BSTRADEC_EXCHANGESELECTOR_H

#include <QDialog>

namespace Ui {
    class ExchangeSelector;
}

class ExchangeSelector : public QDialog
{
Q_OBJECT

public:
    explicit ExchangeSelector(QWidget *parent = nullptr);
    ~ExchangeSelector() override;

private:
    Ui::ExchangeSelector *ui;

protected slots:
    void onSetMessage(bool triggered);
};


#endif //BSTRADEC_EXCHANGESELECTOR_H
