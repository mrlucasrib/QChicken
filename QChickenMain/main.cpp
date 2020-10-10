#include "qchickenmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QChickenMain w;
    w.show();
    return a.exec();
}
