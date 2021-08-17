#include "deletepurchaseditem.h"
#include "ui_deletepurchaseditem.h"

DeletePurchasedItem::DeletePurchasedItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeletePurchasedItem)
{
    ui->setupUi(this);
}

DeletePurchasedItem::~DeletePurchasedItem()
{
    delete ui;
}
