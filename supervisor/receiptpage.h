/**
 * @file receiptpage.h
 */
#ifndef RECEIPTPAGE_H
#define RECEIPTPAGE_H

#include <QDialog>

// #include "actionreceipt.h"

namespace Ui {
class ReceiptPage;
}

class ReceiptPage : public QDialog
{
    Q_OBJECT

public:
    explicit ReceiptPage(QWidget *parent = nullptr);
    ~ReceiptPage();

private slots:
    void on_pushButton_confirm_clicked();

private:
    Ui::ReceiptPage *ui;
    // ActionReceipt *ar;
};

#endif // RECEIPTPAGE_H
