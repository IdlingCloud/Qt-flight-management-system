#ifndef DLG_REGIST_H
#define DLG_REGIST_H

#include <QWidget>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QDebug>
#include "dlg_login.h"

namespace Ui {
class Regist;
}

class Regist : public QWidget
{
    Q_OBJECT

public:
    explicit Regist(QWidget *parent = nullptr);
    ~Regist();

signals:
    void registrationSuccess();

private slots:
    bool isUsernameExist(const QString &username);
    bool isPhoneExist(const QString &phone);
    void insertUserData(const QString &username, const QString &password, const QString &sex, const QString &phone, int userId);
    int getNextUserId();

    void on_btn_regist_clicked();
    void on_btn_cancel_clicked();

private:
    Ui::Regist *ui;
};

#endif // DLG_REGIST_H
