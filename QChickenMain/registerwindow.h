#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QMainWindow>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();
private slots:
     void on_Register_Button_clicked();
     void on_Cancel_Button_clicked();
     bool checkLineEdits();
private:
    Ui::RegisterWindow *ui;
};

#endif // REGISTERWINDOW_H
