#include "deletepurchaseditem.h"
#include "ui_deletepurchaseditem.h"

DeletePurchasedItem::DeletePurchasedItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeletePurchasedItem)
{
    ui->setupUi(this);

    App &a = App::getInstance();
    std::map<std::string, std::string> m = a.deleteFromReceiptList();

    for (const auto& [key, value] : m) {
        std::string str = "";
        str.append(key);
        str.append(" - ");
        str.append(value);

        QString ss = QString::fromUtf8(str.c_str());

        ui->listWidget->addItem(ss);
    }
}

DeletePurchasedItem::~DeletePurchasedItem()
{
    delete ui;
}

void DeletePurchasedItem::on_pushButton_confirm_clicked()
{
    App::getInstance().deletePurchase(ui->listWidget->currentItem()->text().toStdString());
}

