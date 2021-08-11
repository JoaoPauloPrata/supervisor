/********************************************************************************
** Form generated from reading UI file 'homepage_employee.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_EMPLOYEE_H
#define UI_HOMEPAGE_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage_Employee
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_notas_fiscais;
    QPushButton *pushButton_gerar_relatorio;

    void setupUi(QDialog *HomePage_Employee)
    {
        if (HomePage_Employee->objectName().isEmpty())
            HomePage_Employee->setObjectName(QString::fromUtf8("HomePage_Employee"));
        HomePage_Employee->resize(727, 439);
        groupBox = new QGroupBox(HomePage_Employee);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 80, 391, 241));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 271, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_notas_fiscais = new QPushButton(widget);
        pushButton_notas_fiscais->setObjectName(QString::fromUtf8("pushButton_notas_fiscais"));

        verticalLayout->addWidget(pushButton_notas_fiscais);

        pushButton_gerar_relatorio = new QPushButton(widget);
        pushButton_gerar_relatorio->setObjectName(QString::fromUtf8("pushButton_gerar_relatorio"));

        verticalLayout->addWidget(pushButton_gerar_relatorio);


        retranslateUi(HomePage_Employee);

        QMetaObject::connectSlotsByName(HomePage_Employee);
    } // setupUi

    void retranslateUi(QDialog *HomePage_Employee)
    {
        HomePage_Employee->setWindowTitle(QCoreApplication::translate("HomePage_Employee", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HomePage_Employee", "Home Page", nullptr));
        pushButton_notas_fiscais->setText(QCoreApplication::translate("HomePage_Employee", "Notas Fiscais", nullptr));
        pushButton_gerar_relatorio->setText(QCoreApplication::translate("HomePage_Employee", "Gerar Relatorio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage_Employee: public Ui_HomePage_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_EMPLOYEE_H
