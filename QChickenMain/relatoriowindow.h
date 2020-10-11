#ifndef RELATORIOWINDOW_H
#define RELATORIOWINDOW_H

#include <QMainWindow>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QPieSeries>
#include <QBarSeries>
#include <QBarSet>
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
