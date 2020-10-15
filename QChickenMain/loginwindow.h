#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "qchickenmain.h"
#include <QMainWindow>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
     void on_Login_Button_clicked();
     void on_Register_Button_clicked();
     bool checkLineEdits();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
