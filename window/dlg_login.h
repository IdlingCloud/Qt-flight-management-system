#ifndef DLG_LOGIN_H
#define DLG_LOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>


namespace Ui {
class Dlg_login;
}

class Dlg_login : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_login(QWidget *parent = nullptr);
    ~Dlg_login();

private slots:
    void on_btn_login_clicked();

    void on_btn_signin_clicked();

    void on_btn_exit_clicked();
    int getUserIdFromUsername(const QString &username);
    bool validateLogin(const QString &username, const QString &password);

private:
    Ui::Dlg_login *ui;
};

#endif // DLG_LOGIN_H
