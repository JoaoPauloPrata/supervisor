/********************************************************************************
** Form generated from reading UI file 'receipt_page.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPT_PAGE_H
#define UI_RECEIPT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Receipt
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListView *listView_recept_dates;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *Receipt)
    {
        if (Receipt->objectName().isEmpty())
            Receipt->setObjectName(QString::fromUtf8("Receipt"));
        Receipt->resize(640, 480);
        groupBox = new QGroupBox(Receipt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 80, 411, 301));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 50, 258, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView_recept_dates = new QListView(widget);
        listView_recept_dates->setObjectName(QString::fromUtf8("listView_recept_dates"));

        verticalLayout->addWidget(listView_recept_dates);

        pushButton_confirm = new QPushButton(widget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        verticalLayout->addWidget(pushButton_confirm);


        retranslateUi(Receipt);

        QMetaObject::connectSlotsByName(Receipt);
    } // setupUi

    void retranslateUi(QDialog *Receipt)
    {
        Receipt->setWindowTitle(QCoreApplication::translate("Receipt", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Receipt", "GroupBox", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("Receipt", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipt: public Ui_Receipt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPT_PAGE_H
