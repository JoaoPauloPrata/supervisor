#include "receipt.h"
#include "ui_receipt.h"

Receipt::Receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

Receipt::~Receipt()
{
    delete ui;
}

void Receipt::on_pushButton_confirm_clicked()
{
    ActionReceipt *dialog = new ActionReceipt(this);
    hide();
    dialog->show();
}

