#include "ticket.h"
#include "ui_ticket.h"
#include "status.h"
#include <QTime>
#include <QDateTime>
#include <QRegularExpression>
#include <QMessageBox>

ticket::ticket(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ticket)
{
    ui->setupUi(this);
    ui->lbl_time->setAlignment(Qt::AlignCenter);
    ui->lbl_time->setStyleSheet("color: #ff3333;");
    ui->groupBox->setStyleSheet(
        "QGroupBox {"
        "   border: 2px solid white;"              // 设置边框颜色为白色
        "   border-radius: 10px;"                     // 设置边框圆角为10px
        "}"
        "QGroupBox::title {"
        "   font: 16px;"                              // 设置标题字体为16px
        "   color: white;"                          // 设置标题文字颜色为白色
        "   subcontrol-position: top left;"            // 设置标题位置为左上角
        "   padding: 5px;"                            // 可选，设置标题文字的间距
        "}"
        );

}

ticket::~ticket()
{
    delete ui;
}

void ticket::setFlightid(int id) {
    ui->lbl_flightid->setText(QString::number(id));
    ui->lbl_flightid->setStyleSheet("QLabel { color: #0985d9; }");

}
void ticket::setStart(const QString &start) {
    ui->lbl_start->setText(start);
}
void ticket::setEnd(const QString &end) {
    ui->lbl_end->setText(end);
}
void ticket::setDate(const QString &date) {
    ui->lbl_date->setText(date);
}
void ticket::setTime(const QString &date) {
    QDateTime departureTime = QDateTime::fromString(date, "yyyy-M-d");
    if (!departureTime.isValid()) {
        ui->lbl_time->setText("日期格式无效");
        return;
    }

    QDateTime currentTime = QDateTime::currentDateTime();
    qint64 secondsToDeparture = currentTime.secsTo(departureTime);
    qint64 hoursToDeparture = secondsToDeparture / 3600;
    if (hoursToDeparture < 24) {
        ui->lbl_time->setText("已不足24小时");
    } else if (hoursToDeparture < 48) {
        ui->lbl_time->setText("不足2天");
    }  else {
        ui->lbl_time->setText(QString("还有 %1 天").arg(hoursToDeparture / 24));
    }
}
void ticket::setTimeStart(const QString &clock) {
    ui->lbl_time_start->setStyleSheet("color: white;");
    ui->lbl_time_start->setText(clock);
}
void ticket::setTimeEnd(const QString &clock, const QString &during) {
    auto addTime = [](const QString &clock, const QString &during) -> QString {
        // 解析开始时间
        QTime time = QTime::fromString(clock, "hh:mm");
        if (!time.isValid()) {
            return "Invalid start time";
        }

        // 使用正则表达式来解析持续时间
        QRegularExpression regex("(\\d+)小时(\\d+)分");
        QRegularExpressionMatch match = regex.match(during);

        if (match.hasMatch()) {
            // 获取小时和分钟
            int hours = match.captured(1).toInt();
            int minutes = match.captured(2).toInt();

            // 计算总分钟数
            int totalMinutes = hours * 60 + minutes;

            // 将总分钟数加到开始时间上
            time = time.addSecs(totalMinutes * 60);

            // 返回新的时间字符串
            return time.toString("hh:mm");
        } else {
            return "Invalid duration format";
        }
    };
    ui->lbl_time_end->setStyleSheet("color: white;");
    ui->lbl_time_end->setText(addTime(clock, during));
}
void ticket::setDuring(const QString &during) {
    ui->lbl_during->setText(during);
}

void ticket::on_btn_cancel_clicked()
{
    int flightId = ui->lbl_flightid->text().toInt();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "退票确认", "确定要退票吗？", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM schedule WHERE userid = :userid AND flightid = :flightid");
        query.bindValue(":userid", userid);
        query.bindValue(":flightid", flightId);

        if (query.exec()) {
            QMessageBox::information(this, "提示", "退票成功！");

        } else {
            QMessageBox::critical(this, "错误", "退票失败：" + query.lastError().text());
        }
    } else {
        QMessageBox::information(this, "提示", "操作已取消");
    }
}

