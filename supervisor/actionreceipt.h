#ifndef ACTIONRECEIPT_H
#define ACTIONRECEIPT_H

#include <QDialog>

#include "addpurchaseditem.h"
#include "deletepurchaseditem.h"

namespace Ui {
class ActionReceipt;
}

class ActionReceipt : public QDialog
{
    Q_OBJECT

public:
    explicit ActionReceipt(QWidget *parent = nullptr);
    ~ActionReceipt();

private slots:
    void on_pushButton_add_purchase_clicked();

    void on_pushButton_delete_purchase_clicked();

private:
    Ui::ActionReceipt *ui;
    AddPurchasedItem *ai;
    DeletePurchasedItem *di;
};

#endif // ACTIONRECEIPT_H
