#include "actionreceipt.h"
#include "ui_actionreceipt.h"

ActionReceipt::ActionReceipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActionReceipt)
{
    ui->setupUi(this);
}

ActionReceipt::~ActionReceipt()
{
    delete ui;
}

void ActionReceipt::on_pushButton_add_purchase_clicked()
{
    AddPurchasedItem *dialog = new AddPurchasedItem(this);
    dialog->show();
}

void ActionReceipt::on_pushButton_delete_purchase_clicked()
{
    DeletePurchasedItem *dialog = new DeletePurchasedItem(this);
    dialog->show();
}

