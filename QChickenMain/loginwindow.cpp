#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "relatoriowindow.h"
#include "registerwindow.h"
#include "adminpanel.h"
#include <QMessageBox>
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_Login_Button_clicked()
{
    if(checkLineEdits()){

      auto *r = new AdminPanel();
      r->show();
      this->close();
    }
    else
       QMessageBox::information(0, QString("Dados Inválidos"), QString("Preencha todos os campos para efetuar o login"), QMessageBox::Ok);


}

void LoginWindow::on_Register_Button_clicked()
{
    auto *r = new RegisterWindow();
    r->show();
    //this->close();
}

bool LoginWindow::checkLineEdits()
{
    bool ok = !ui->lineEdit->text().isEmpty()
    && !ui->lineEdit_2->text().isEmpty();
    return ok;

}

