#include "dlg_pay.h"
#include "ui_dlg_pay.h"
#include "status.h"
#include "dlg_flight.h"
#include "dlg_schedule.h"

pay::pay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pay)
    , remaining_time(1 * 60)
{
    ui->setupUi(this);
    ui->lbl_time->setAlignment(Qt::AlignCenter);
    ui->lbl_time->setStyleSheet("color: red;");
    ClosingTimer = new QTimer(this); //界面自动关闭的倒计时
    connect(ClosingTimer, &QTimer::timeout, this, &pay::close_widget);
    Timer = new QTimer(this);        //有限支付时间的倒计时
    connect(Timer, &QTimer::timeout, this, &pay::lbl_time_update);
    Timer->start(1000);
    ui->lbl_picture->setVisible(false);
    connect(ui->radio_BankCard, &QRadioButton::clicked, this, &pay::pay_method_changed);
    connect(ui->radio_Alipay, &QRadioButton::clicked, this, &pay::pay_method_changed);
    connect(ui->radio_WeChat, &QRadioButton::clicked, this, &pay::pay_method_changed);
}

pay::~pay()
{
    Timer->stop();
    delete ui;
}

//实现倒计时
void pay::lbl_time_update() {
    if (remaining_time > 0) {
        remaining_time--;
        int minutes = remaining_time / 60;
        int seconds = remaining_time % 60;
        ui->lbl_time->setText(QString("%1：%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0')));
        ui->lbl_time->repaint();
    } else {
        Timer->stop();
        qDebug() << "用户取消支付";
        ui->lbl_status->setText("未支付 界面将在5秒后自动关闭");
        ui->btn_pay->setEnabled(false); // 禁用支付按钮
        ClosingTimer->start(5000);
    }
}

void pay::on_btn_pay_clicked()
{
    Timer->stop();
    qDebug() << "支付完成，支付方式：" << (ui->radio_BankCard->isChecked() ? "银行卡" :ui->radio_Alipay->isChecked() ? "支付宝" :ui->radio_WeChat->isChecked() ? "微信支付" : "default");
    ui->lbl_status->setText("已支付 界面将在5秒后自动关闭");
    ui->btn_pay->setEnabled(false);
    // 执行插入操作
    QSqlQuery query;
    query.prepare("INSERT INTO schedule (userid, flightid, date) VALUES (:userid, :flightid, :date)");
    query.bindValue(":userid", userid);
    query.bindValue(":flightid", flightid);
    //query.bindValue(":date", date);
    if (query.exec()) {
        qDebug() << "成功：支付成功，信息已保存！";
        //count++;
    } else {
        qDebug() << "错误：支付失败！原因：" << query.lastError().text();
    }
    ClosingTimer->start(5000);
}


void pay::on_btn_cancel_clicked()
{
    Timer->stop();
    qDebug() << "用户取消支付";
    ui->lbl_status->setText("未支付 界面将在5秒后自动关闭");
    ui->btn_pay->setEnabled(false);
    ClosingTimer->start(5000);
}

//实现不同支付方式的支付途径
void pay::pay_method_changed() {
    if (ui->radio_BankCard->isChecked()) {
        ui->le_account->setVisible(true);
        ui->le_pwd->setVisible(true);
        ui->le_account->setText("请输入卡号");
        ui->le_pwd->setText("请输入密码");
        ui->lbl_picture->setVisible(false);
    } else {
        ui->le_account->setVisible(false);
        ui->le_pwd->setVisible(false);
        ui->lbl_picture->setVisible(true);
    }
}

void pay::close_widget()
{
    ClosingTimer->stop();
    this->close();
}


void pay::on_le_account_selectionChanged()
{
    ui->le_account->clear();
}


void pay::on_le_pwd_selectionChanged()
{
    ui->le_pwd->clear();
}