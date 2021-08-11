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
