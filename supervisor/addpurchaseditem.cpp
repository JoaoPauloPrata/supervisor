#include "addpurchaseditem.h"
#include "ui_addpurchaseditem.h"

AddPurchasedItem::AddPurchasedItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPurchasedItem)
{
    ui->setupUi(this);
}

AddPurchasedItem::~AddPurchasedItem()
{
    delete ui;
}

void AddPurchasedItem::on_pushButton_confirm_clicked()
{
    QString name = ui->lineEdit_name->text();
    double price = ui->doubleSpinBox_price->value();
    int quantity = ui->spinBox_quantity->value();
    QString time = ui->lineEdit_time->text();

    // SoldItem *i = new SoldItem(name, price, quantity, time);
    // nota_fiscal.add(i);
}

