/**
 * @file homepage_employee.h
 */
#ifndef HOMEPAGE_EMPLOYEE_H
#define HOMEPAGE_EMPLOYEE_H

#include <QDialog>

#include "actionreceipt.h"
// #include "receiptpage.h"
#include "report.h"

namespace Ui {
class HomePage_Employee;
}

class HomePage_Employee : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage_Employee(QWidget *parent = nullptr);
    ~HomePage_Employee();

private slots:
    void on_pushButton_notas_fiscais_clicked();

    void on_pushButton_gerar_relatorio_clicked();

private:
    Ui::HomePage_Employee *ui;
    ReceiptPage *rc;
    Report *rp;
    ActionReceipt *ac;
};

#endif // HOMEPAGE_EMPLOYEE_H
