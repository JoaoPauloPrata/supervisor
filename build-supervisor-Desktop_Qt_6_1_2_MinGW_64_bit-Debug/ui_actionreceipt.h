/********************************************************************************
** Form generated from reading UI file 'actionreceipt.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONRECEIPT_H
#define UI_ACTIONRECEIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionReceipt
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_add_purchase;
    QPushButton *pushButton_delete_purchase;

    void setupUi(QDialog *ActionReceipt)
    {
        if (ActionReceipt->objectName().isEmpty())
            ActionReceipt->setObjectName(QString::fromUtf8("ActionReceipt"));
        ActionReceipt->resize(640, 480);
        groupBox = new QGroupBox(ActionReceipt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 120, 311, 231));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 221, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_add_purchase = new QPushButton(widget);
        pushButton_add_purchase->setObjectName(QString::fromUtf8("pushButton_add_purchase"));

        verticalLayout->addWidget(pushButton_add_purchase);

        pushButton_delete_purchase = new QPushButton(widget);
        pushButton_delete_purchase->setObjectName(QString::fromUtf8("pushButton_delete_purchase"));

        verticalLayout->addWidget(pushButton_delete_purchase);


        retranslateUi(ActionReceipt);

        QMetaObject::connectSlotsByName(ActionReceipt);
    } // setupUi

    void retranslateUi(QDialog *ActionReceipt)
    {
        ActionReceipt->setWindowTitle(QCoreApplication::translate("ActionReceipt", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ActionReceipt", "Nota Fiscal", nullptr));
        pushButton_add_purchase->setText(QCoreApplication::translate("ActionReceipt", "Adicionar compra", nullptr));
        pushButton_delete_purchase->setText(QCoreApplication::translate("ActionReceipt", "Deletar compra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionReceipt: public Ui_ActionReceipt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONRECEIPT_H
