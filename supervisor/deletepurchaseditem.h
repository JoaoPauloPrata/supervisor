/**
 * @file deletepurchaseditem.h
 */
#ifndef DELETEPURCHASEDITEM_H
#define DELETEPURCHASEDITEM_H

#include <QDialog>
#include <QListWidgetItem>
#include <map>
#include "../src/lib/app.h"

namespace Ui {
class DeletePurchasedItem;
}

class DeletePurchasedItem : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePurchasedItem(QWidget *parent = nullptr);
    ~DeletePurchasedItem();

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::DeletePurchasedItem *ui;
};

#endif // DELETEPURCHASEDITEM_H
