#include "relatoriowindow.h"
#include "ui_relatoriowindow.h"
#include<iostream>
using namespace std;
RelatorioWindow::RelatorioWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RelatorioWindow)
{

    ui->setupUi(this);

    //grafico de linha
    QLineSeries *lineSeries = new QLineSeries();
    lineSeries->append(0,6);
    lineSeries->append(2,4);
    lineSeries->append(3,8);
    *lineSeries << QPointF(10,1) << QPointF(12,3) << QPointF(14,6);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(lineSeries);
    chart->createDefaultAxes();
    chart->setTitle("Balanco financeiro");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->graphicsView_2);
    chartView->setMinimumSize(387,235);


    //grafico de pizza
    QPieSeries *pieseries = new QPieSeries();
    pieseries->append("ovos",60);
    pieseries->append("Frangos", 40);
    QChart *piechart= new QChart();
    piechart->addSeries(pieseries);
    piechart->setTitle("Lucro por Produto");
    QChartView *piechartview =new QChartView(piechart);
    piechartview->setParent(ui->graphicsView);
    piechartview->setMinimumSize(387,235);


    //Grafico de barras

   QBarSet *set0 = new QBarSet("frango");
   QBarSet *set1 = new QBarSet("ovo");


   *set0 << 10 <<22 << 44 << 51 << 60 <<30;
   *set1 << 20 << 50 << 10 << 5<< 15 << 20;

    QBarSeries *barseries = new QBarSeries();
    barseries->append(set0);
    barseries->append(set1);


    QChart *barchart = new QChart();
    barchart->addSeries(barseries);
    barchart->setTitle("Lucro Mensal por produto (Ovo/Frango)");
    barchart->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categorias;
    categorias << "Mes1" << "Mes2"<< "Mes3" << "Mes4" << "Mes5" << "Mes6";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categorias);
    barchart->createDefaultAxes();
    barchart->setAxisX(axis,barseries);
    QChartView *barchartView = new QChartView(barchart);
    barchartView->setParent(ui->graphicsView_3);
    barchartView->setMinimumSize(782,237);
}
RelatorioWindow::~RelatorioWindow()
{
    delete ui;
}
void RelatorioWindow::on_pushButton_clicked(){
   // adidionar funcionalidade print posteriormente

}
