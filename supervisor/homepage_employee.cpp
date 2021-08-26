#include "homepage_employee.h"
#include "ui_homepage_employee.h"

HomePage_Employee::HomePage_Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HomePage_Employee)
{
    ui->setupUi(this);
}

HomePage_Employee::~HomePage_Employee()
{
    delete ui;
}

void HomePage_Employee::on_pushButton_notas_fiscais_clicked()
{
    // ReceiptPage *dialog = new ReceiptPage(this);
    // hide();
    // dialog->show();

    ActionReceipt *dialog = new ActionReceipt(this);
    // hide();
    dialog->show();
}

void HomePage_Employee::on_pushButton_gerar_relatorio_clicked()
{
    App::getInstance().report();
    Report *dialog = new Report(this);
    // hide();
    dialog->show();
}

