#include "dialogadduser.h"
#include "ui_dialogadduser.h"

DialogAddUser::DialogAddUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddUser)
{
    ui->setupUi(this);
}

DialogAddUser::~DialogAddUser()
{
    delete ui;
}

void DialogAddUser::on_buttonBox_accepted()
{
    name = ui->name->text();
    email = ui->email->text();
    role = ui->cbcrole->currentText();


}

QString DialogAddUser::getName() const
{
    return name;
}

QString DialogAddUser::getRole() const
{
    return role;
}

QString DialogAddUser::getEmail() const
{
    return email;
}
