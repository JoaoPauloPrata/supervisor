/**
 * @file deletepurchaseditem.h
 */
#ifndef DELETEPURCHASEDITEM_H
#define DELETEPURCHASEDITEM_H

#include <QDialog>

namespace Ui {
class DeletePurchasedItem;
}

class DeletePurchasedItem : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePurchasedItem(QWidget *parent = nullptr);
    ~DeletePurchasedItem();

private:
    Ui::DeletePurchasedItem *ui;
};

#endif // DELETEPURCHASEDITEM_H
