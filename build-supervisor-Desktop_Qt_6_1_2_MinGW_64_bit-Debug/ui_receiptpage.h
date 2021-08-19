/********************************************************************************
** Form generated from reading UI file 'receiptpage.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTPAGE_H
#define UI_RECEIPTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiptPage
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListView *listView_recept_dates;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *ReceiptPage)
    {
        if (ReceiptPage->objectName().isEmpty())
            ReceiptPage->setObjectName(QString::fromUtf8("ReceiptPage"));
        ReceiptPage->resize(640, 480);
        groupBox = new QGroupBox(ReceiptPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 80, 411, 301));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 258, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView_recept_dates = new QListView(layoutWidget);
        listView_recept_dates->setObjectName(QString::fromUtf8("listView_recept_dates"));

        verticalLayout->addWidget(listView_recept_dates);

        pushButton_confirm = new QPushButton(layoutWidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        verticalLayout->addWidget(pushButton_confirm);


        retranslateUi(ReceiptPage);

        QMetaObject::connectSlotsByName(ReceiptPage);
    } // setupUi

    void retranslateUi(QDialog *ReceiptPage)
    {
        ReceiptPage->setWindowTitle(QCoreApplication::translate("ReceiptPage", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReceiptPage", "GroupBox", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("ReceiptPage", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiptPage: public Ui_ReceiptPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTPAGE_H
