#ifndef DIALOGADDUSER_H
#define DIALOGADDUSER_H

#include <QDialog>

namespace Ui {
class DialogAddUser;
}

class DialogAddUser : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddUser(QWidget *parent = nullptr);
    ~DialogAddUser();


    QString getEmail() const;

    QString getRole() const;

    QString getName() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogAddUser *ui;
    QString name;
    QString email;
    QString role;
};

#endif // DIALOGADDUSER_H
