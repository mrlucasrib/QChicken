#include "relatoriowindow.h"
#include "ui_relatoriowindow.h"

RelatorioWindow::RelatorioWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RelatorioWindow)
{
    ui->setupUi(this);

    //grafico de linha
    QLineSeries *series = new QLineSeries();
    series->append(0,6);
    series->append(2,4);
    series->append(3,8);
    *series << QPointF(11,1) << QPointF(13,3) << QPointF(17,6);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Balanco financeiro");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->graphicsView_2);
    chartView->setMinimumSize(387,280);


    //grafico de pizza
    QPieSeries *pieseries = new QPieSeries();
    pieseries->append("ovos",80);
    pieseries->append("Frangos", 20);
    QChart *piechart= new QChart();
    piechart->addSeries(pieseries);
    piechart->setTitle("Lucro por Produto");
    QChartView *piechartview =new QChartView(piechart);
    piechartview->setParent(ui->graphicsView);
    piechartview->setMinimumSize(387,280);


    //Grafico de barras

   QBarSet *set0 = new QBarSet("frango");
   QBarSet *set1 = new QBarSet("ovo");


   *set0 << 10 <<20 << 40 << 50 << 60 <<30;
   *set1 << 20 << 50 << 10 << 5<< 15 << 20;

    QBarSeries *barseries = new QBarSeries();
    barseries->append(set0);
    barseries->append(set1);


    QChart *barchart = new QChart();
    barchart->addSeries(barseries);
    barchart->setTitle("Lucro Mensal por produto");
    barchart->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categorias;
    categorias << "Mes1" << "Mes2"<< "Mes3" << "Mes4" << "Mes5" << "Mes6";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categorias);
    barchart->createDefaultAxes();
    barchart->setAxisX(axis,barseries);
    QChartView *barchartView = new QChartView(barchart);
    barchartView->setParent(ui->graphicsView_3);
    barchartView->setMinimumSize(387,280);
}
RelatorioWindow::~RelatorioWindow()
{
    delete ui;
}
