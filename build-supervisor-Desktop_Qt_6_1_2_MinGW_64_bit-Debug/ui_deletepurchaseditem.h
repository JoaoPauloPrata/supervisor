/********************************************************************************
** Form generated from reading UI file 'deletepurchaseditem.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPURCHASEDITEM_H
#define UI_DELETEPURCHASEDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeletePurchasedItem
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_pick_item;
    QListView *listView_purchased_items;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *DeletePurchasedItem)
    {
        if (DeletePurchasedItem->objectName().isEmpty())
            DeletePurchasedItem->setObjectName(QString::fromUtf8("DeletePurchasedItem"));
        DeletePurchasedItem->resize(640, 480);
        groupBox = new QGroupBox(DeletePurchasedItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 70, 351, 321));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 258, 240));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_pick_item = new QLabel(widget);
        label_pick_item->setObjectName(QString::fromUtf8("label_pick_item"));

        verticalLayout->addWidget(label_pick_item);

        listView_purchased_items = new QListView(widget);
        listView_purchased_items->setObjectName(QString::fromUtf8("listView_purchased_items"));

        verticalLayout->addWidget(listView_purchased_items);

        pushButton_confirm = new QPushButton(widget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        verticalLayout->addWidget(pushButton_confirm);


        retranslateUi(DeletePurchasedItem);

        QMetaObject::connectSlotsByName(DeletePurchasedItem);
    } // setupUi

    void retranslateUi(QDialog *DeletePurchasedItem)
    {
        DeletePurchasedItem->setWindowTitle(QCoreApplication::translate("DeletePurchasedItem", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeletePurchasedItem", "Receipt", nullptr));
        label_pick_item->setText(QCoreApplication::translate("DeletePurchasedItem", "Escolha um item", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("DeletePurchasedItem", "Deletar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletePurchasedItem: public Ui_DeletePurchasedItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPURCHASEDITEM_H
