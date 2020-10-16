#include "adminpanel.h"
#include "ui_adminpanel.h"
#include"connection.h"
#include "dialogadduser.h"
#include <QSqlRecord>

void AdminPanel::initializeModel(QSqlTableModel *model)
{
    model->setTable("person");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

//    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Codigo do usuario"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nome"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Cargo"));
}

AdminPanel::AdminPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);
    createConnection();
    model = new QSqlTableModel(this, db);
    initializeModel(model);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);


}

AdminPanel::~AdminPanel()
{
    delete ui;
}



void AdminPanel::on_btnadd_clicked()
{
    DialogAddUser d;
    if(d.exec() == DialogAddUser::Accepted){
        db.transaction();
        auto name = d.getName();
        auto email = d.getEmail();
        auto role = d.getRole();

        auto record = model->record();

//        record.remove(record.indexOf("id"));
        record.setValue("firstname", name); // TODO: Corrigir tabela
        record.setValue("lastname", role);
        //        record.setValue("role", name);

        if(model->insertRecord(-1,record)){
            model->submitAll();
        }else{
            db.rollback();
        }


    }

}

void AdminPanel::on_saveEditionspb_clicked()
{
    if(!model->submitAll())
        QMessageBox::critical(this,"Erro ao salvar" , model->lastError().text(), QMessageBox::Cancel);
}

void AdminPanel::on_deletepb_clicked()
{
    auto *select = ui->tableView->selectionModel();
    if(select->hasSelection()){
        auto item = select->selectedRows();
        auto index = item.first().row();
        model->removeRow(index);}else
        QMessageBox::critical(this,"Erro excluir" ,"Selecione a partir dos numeros	", QMessageBox::Cancel);

}
