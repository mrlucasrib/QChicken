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

bool ok = !ui->spinBox->value() == 0
&& !ui->spinBox_2->value() == 0
&& !ui->spinBox_3->value() == 0
&& !ui->spinBox_4->value() == 0
&& !ui->spinBox_5->value() == 0
&& !ui->spinBox_6->value() == 0;
return ok;

}

