#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "app.h"
#include "homepage_employee.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_login_clicked();

private:
    Ui::MainWindow *ui;
    HomePage_Employee *home_page_employee;
};
#endif // MAINWINDOW_H
