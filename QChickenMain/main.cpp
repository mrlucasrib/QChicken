#include "qchickenmain.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include "adminpanel.h"
#include "relatoriowindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

  QChickenMain w;
    //AdminPanel w;
  //LoginWindow w;
    w.show();
        return a.exec();
}
