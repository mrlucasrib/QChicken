#include "qchickenmain.h"
#include "ui_qchickenmain.h"

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

