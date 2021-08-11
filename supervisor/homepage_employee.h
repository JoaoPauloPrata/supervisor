#ifndef HOMEPAGE_EMPLOYEE_H
#define HOMEPAGE_EMPLOYEE_H

#include <QDialog>

namespace Ui {
class HomePage_Employee;
}

class HomePage_Employee : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage_Employee(QWidget *parent = nullptr);
    ~HomePage_Employee();

private:
    Ui::HomePage_Employee *ui;
};

#endif // HOMEPAGE_EMPLOYEE_H
