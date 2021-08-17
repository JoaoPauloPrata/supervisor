/********************************************************************************
** Form generated from reading UI file 'addpurchaseditem.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPURCHASEDITEM_H
#define UI_ADDPURCHASEDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPurchasedItem
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_price;
    QDoubleSpinBox *doubleSpinBox_price;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_quantity;
    QSpinBox *spinBox_quantity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_time;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *AddPurchasedItem)
    {
        if (AddPurchasedItem->objectName().isEmpty())
            AddPurchasedItem->setObjectName(QString::fromUtf8("AddPurchasedItem"));
        AddPurchasedItem->resize(640, 480);
        groupBox = new QGroupBox(AddPurchasedItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(140, 100, 331, 231));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 50, 161, 150));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_name = new QLabel(widget);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout->addWidget(label_name);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_price = new QLabel(widget);
        label_price->setObjectName(QString::fromUtf8("label_price"));

        horizontalLayout_2->addWidget(label_price);

        doubleSpinBox_price = new QDoubleSpinBox(widget);
        doubleSpinBox_price->setObjectName(QString::fromUtf8("doubleSpinBox_price"));

        horizontalLayout_2->addWidget(doubleSpinBox_price);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_quantity = new QLabel(widget);
        label_quantity->setObjectName(QString::fromUtf8("label_quantity"));

        horizontalLayout_3->addWidget(label_quantity);

        spinBox_quantity = new QSpinBox(widget);
        spinBox_quantity->setObjectName(QString::fromUtf8("spinBox_quantity"));

        horizontalLayout_3->addWidget(spinBox_quantity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_time = new QLabel(widget);
        label_time->setObjectName(QString::fromUtf8("label_time"));

        horizontalLayout_4->addWidget(label_time);

        lineEdit_time = new QLineEdit(widget);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));

        horizontalLayout_4->addWidget(lineEdit_time);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_confirm = new QPushButton(widget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        verticalLayout_2->addWidget(pushButton_confirm);


        retranslateUi(AddPurchasedItem);

        QMetaObject::connectSlotsByName(AddPurchasedItem);
    } // setupUi

    void retranslateUi(QDialog *AddPurchasedItem)
    {
        AddPurchasedItem->setWindowTitle(QCoreApplication::translate("AddPurchasedItem", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddPurchasedItem", "Nota Fiscal", nullptr));
        label_name->setText(QCoreApplication::translate("AddPurchasedItem", "Nome", nullptr));
        label_price->setText(QCoreApplication::translate("AddPurchasedItem", "Pre\303\247o", nullptr));
        label_quantity->setText(QCoreApplication::translate("AddPurchasedItem", "Quantidade", nullptr));
        label_time->setText(QCoreApplication::translate("AddPurchasedItem", "Hor\303\241rio", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("AddPurchasedItem", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPurchasedItem: public Ui_AddPurchasedItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPURCHASEDITEM_H
