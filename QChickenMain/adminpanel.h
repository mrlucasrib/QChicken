#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QMainWindow>
#include <QSqlTableModel>
#include "connection.h"
namespace Ui {
class AdminPanel;
}

class AdminPanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

private slots:

    void on_btnadd_clicked();

    void on_saveEditionspb_clicked();

    void on_deletepb_clicked();

private:
    Ui::AdminPanel *ui;
    QSqlTableModel *model;
    void initializeModel(QSqlTableModel*);
    QSqlDatabase db;

};

#endif // ADMINPANEL_H
