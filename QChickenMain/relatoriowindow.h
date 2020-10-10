#ifndef RELATORIOWINDOW_H
#define RELATORIOWINDOW_H

#include <QMainWindow>

namespace Ui {
class RelatorioWindow;
}

class RelatorioWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RelatorioWindow(QWidget *parent = nullptr);
    ~RelatorioWindow();

private:
    Ui::RelatorioWindow *ui;
};

#endif // RELATORIOWINDOW_H
