/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListView *listView_recept_dates;
    QPushButton *pushButton_confirm;

    void setupUi(QDialog *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName(QString::fromUtf8("Report"));
        Report->resize(640, 480);
        groupBox = new QGroupBox(Report);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(120, 70, 391, 311));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 50, 258, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listView_recept_dates = new QListView(layoutWidget);
        listView_recept_dates->setObjectName(QString::fromUtf8("listView_recept_dates"));

        verticalLayout->addWidget(listView_recept_dates);

        pushButton_confirm = new QPushButton(layoutWidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));

        verticalLayout->addWidget(pushButton_confirm);


        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QDialog *Report)
    {
        Report->setWindowTitle(QCoreApplication::translate("Report", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Report", "Report", nullptr));
        pushButton_confirm->setText(QCoreApplication::translate("Report", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
