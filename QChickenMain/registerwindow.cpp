#include "registerwindow.h"
#include "loginwindow.h"
#include "ui_registerwindow.h"
#include "adminpanel.h"
#include <QMessageBox>
RegisterWindow::RegisterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_Register_Button_clicked()
{
    if(checkLineEdits()){

      auto *r = new AdminPanel();
      r->show();
      this->close();
    }
    else
       QMessageBox::information(0, QString("Dados Inválidos"), QString("Preencha todos os campos para efetuar o login"), QMessageBox::Ok);


}

void RegisterWindow::on_Cancel_Button_clicked()
{
 this->close();

}

bool RegisterWindow::checkLineEdits()
{
    bool ok = !ui->lineEdit->text().isEmpty()
    && !ui->lineEdit_2->text().isEmpty()
    && !ui->lineEdit_3->text().isEmpty();
    return ok;
}
