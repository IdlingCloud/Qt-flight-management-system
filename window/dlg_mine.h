#ifndef DLG_MINE_H
#define DLG_MINE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "dlg_edit.h"

namespace Ui {
class Dlg_mine;
}

class Dlg_mine : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_mine(QWidget *parent = nullptr);
    ~Dlg_mine();
    void loadCount();

private slots:
    void on_editPassword_clicked();
    void loadUserInfo(int userId);

    void on_btn_refresh_clicked();

    void on_btn_exit_clicked();

private:
    Ui::Dlg_mine *ui;
};

#endif // DLG_MINE_H
