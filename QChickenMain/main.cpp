#include "qchickenmain.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include "adminpanel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//     LoginWindow w;
    AdminPanel w;
    w.show();
        return a.exec();
}
