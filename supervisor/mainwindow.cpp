#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_login_clicked()
{
    QString username = ui->lineEdit_user->text();
    QString password = ui->lienEdit_password->text();

    App &a = App::getInstance();
    int log = a.login(username.toStdString(), password.toStdString());

    if(log) {
        QMessageBox::information(this, "Login", "Login feito com sucesso!");
        hide();

        HomePage_Employee *dialog = new HomePage_Employee(this);
        dialog->show();
    } else {
        QMessageBox::warning(this, "Login", "Usuário e senha incorretos.");
    }
}

