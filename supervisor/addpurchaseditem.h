#ifndef ADDPURCHASEDITEM_H
#define ADDPURCHASEDITEM_H

#include <QDialog>
#include "app.h"

namespace Ui {
class AddPurchasedItem;
}

class AddPurchasedItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddPurchasedItem(QWidget *parent = nullptr);
    ~AddPurchasedItem();

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::AddPurchasedItem *ui;
};

#endif // ADDPURCHASEDITEM_H
