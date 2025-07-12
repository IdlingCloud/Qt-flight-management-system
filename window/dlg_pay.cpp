#include "dlg_pay.h"
#include "ui_dlg_pay.h"
#include "status.h"
#include "dlg_flight.h"
#include "dlg_schedule.h"

pay::pay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pay)
{
    ui->setupUi(this);
    ui->lbl_time->setAlignment(Qt::AlignCenter);
    ui->lbl_time->setStyleSheet("color: red;");
    ui->lbl_picture->setVisible(false);
    connect(ui->radio_BankCard, &QRadioButton::clicked, this, &pay::pay_method_changed);
    connect(ui->radio_Alipay, &QRadioButton::clicked, this, &pay::pay_method_changed);
    connect(ui->radio_WeChat, &QRadioButton::clicked, this, &pay::pay_method_changed);
}

pay::~pay()
{
    delete ui;
}

void pay::on_btn_pay_clicked()
{
    qDebug() << "支付完成，支付方式：" << (ui->radio_BankCard->isChecked() ? "银行卡" :ui->radio_Alipay->isChecked() ? "支付宝" :ui->radio_WeChat->isChecked() ? "微信支付" : "default");
    ui->lbl_status->setText("已支付");
    ui->btn_pay->setEnabled(false);
    // 执行插入操作
    QSqlQuery query;
    query.prepare("INSERT INTO schedule (userid, flightid, date) VALUES (:userid, :flightid, :date)");
    query.bindValue(":userid", userid);
    query.bindValue(":flightid", flightid);
    if (query.exec()) {
        qDebug() << "成功：支付成功，信息已保存！";
    } else {
        qDebug() << "错误：支付失败！原因：" << query.lastError().text();
    }
}


void pay::on_btn_cancel_clicked()
{
    qDebug() << "用户取消支付";
    ui->lbl_status->setText("未支付");
    ui->btn_pay->setEnabled(false);
}

//实现不同支付方式的支付途径
void pay::pay_method_changed() {
    if (ui->radio_BankCard->isChecked()) {
        ui->le_account->setVisible(true);
        ui->le_pwd->setVisible(true);
        ui->le_account->setText("请输入卡号");
        ui->le_pwd->setText("请输入密码");
    } else {
        ui->lbl_picture->setVisible(true);
    }
}

void pay::on_le_account_selectionChanged()
{
    ui->le_account->clear();
}


void pay::on_le_pwd_selectionChanged()
{
    ui->le_pwd->clear();
}

