#include "receiptpage.h"
#include "ui_receiptpage.h"

ReceiptPage::ReceiptPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReceiptPage)
{
    ui->setupUi(this);
}

ReceiptPage::~ReceiptPage()
{
    delete ui;
}

void ReceiptPage::on_pushButton_confirm_clicked()
{
    ActionReceipt *dialog = new ActionReceipt(this);
    hide();
    dialog->show();
}

