#include "qchickenmain.h"
#include "ui_qchickenmain.h"
#include "relatoriowindow.h"
QChickenMain::QChickenMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QChickenMain)
{
    ui->setupUi(this);

}

QChickenMain::~QChickenMain()
{
    delete ui;
}



void QChickenMain::on_registerbtn_clicked()
{
 if(checkLineEdits()){

   auto *r = new RelatorioWindow();
   r->show();
 }
 else
    QMessageBox::information(0, QString("Dados Inválidos"), QString("Preencha todos os campos para registrar"), QMessageBox::Ok);

}
bool QChickenMain::checkLineEdits()
{

bool ok = !ui->lineEdit_2->text().isEmpty()
&& !ui->lineEdit_9->text().isEmpty()
&& !ui->lineEdit_10->text().isEmpty()
&& !ui->lineEdit_11->text().isEmpty()
&& !ui->lineEdit_12->text().isEmpty()
&& !ui->lineEdit_13->text().isEmpty();
return ok;

}

