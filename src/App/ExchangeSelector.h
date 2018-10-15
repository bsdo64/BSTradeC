//
// Created by 도병수 on 2018. 9. 14..
//

#ifndef BSTRADEC_EXCHANGESELECTOR_H
#define BSTRADEC_EXCHANGESELECTOR_H

#include <QDebug>
#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
    class ExchangeSelector;
}

class ExchangeSelector : public QDialog
{
Q_OBJECT

public:
    explicit ExchangeSelector(QWidget *parent = nullptr);
    ~ExchangeSelector() override;

protected:
    void wheelEvent(QWheelEvent *event) override;

private:
    Ui::ExchangeSelector *ui;
    QListWidgetItem *s_item;

protected slots:
    void openMain();
    void itemSelected(QListWidgetItem *item);
};


#endif //BSTRADEC_EXCHANGESELECTOR_H
