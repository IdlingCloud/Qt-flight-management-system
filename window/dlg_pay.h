#ifndef DLG_PAY_H
#define DLG_PAY_H

#include <QWidget>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class pay;
}

class pay : public QWidget
{
    Q_OBJECT

public:
    explicit pay(QWidget *parent = nullptr);
    ~pay();

private slots:
    void lbl_time_update();
    void on_btn_pay_clicked();
    void on_btn_cancel_clicked();
    void close_widget();
    void pay_method_changed();
    void on_le_account_selectionChanged();
    void on_le_pwd_selectionChanged();

private:
    Ui::pay *ui;
    QTimer *Timer;
    QTimer *ClosingTimer;
    int remaining_time;
    int closing_time;
};

#endif // DLG_PAY_H
