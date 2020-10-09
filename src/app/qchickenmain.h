#ifndef QCHICKENMAIN_H
#define QCHICKENMAIN_H
#include<QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QChickenMain; }
QT_END_NAMESPACE

class QChickenMain : public QMainWindow
{
    Q_OBJECT

public:
    QChickenMain(QWidget *parent = nullptr);
    ~QChickenMain();

private:
    Ui::QChickenMain *ui;
};
#endif // QCHICKENMAIN_H
