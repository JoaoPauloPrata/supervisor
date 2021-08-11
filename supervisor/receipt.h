#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>

#include "actionreceipt.h"

namespace Ui {
class Receipt;
}

class Receipt : public QDialog
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);
    ~Receipt();

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::Receipt *ui;
    ActionReceipt *ar;
};

#endif // RECEIPT_H
