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

//bool ok = !ui->spinBox->text().isEmpty()
//&& !ui->spinBox_2->text().toStdString() == ""
//&& !ui->spinBox_3->text().isEmpty()
//&& !ui->spinBox_4->text().isEmpty()
//&& !ui->spinBox_5->text().isEmpty()
//&& !ui->spinBox_6->text().isEmpty();
//return ok;

}

