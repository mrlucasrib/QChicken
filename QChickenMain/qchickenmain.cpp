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
   auto *r = new RelatorioWindow();
   r->show();
}
