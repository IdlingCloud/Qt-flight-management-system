#include "dlg_mine.h"
#include "ui_dlg_mine.h"
#include "status.h"
#include "dlg_login.h"
#include <QProcess>

Dlg_mine::Dlg_mine(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_mine)
{
    ui->setupUi(this);
    // 根据全局变量 userid 从数据库中查询用户信息
    if (userid != -1) {  // 检查 userid 是否有效
        loadUserInfo(userid);
    } else {
        QMessageBox::warning(this, "错误", "无效的用户ID！");
    }
    loadCount();

    ui->lbl_username->setStyleSheet("color: #f9568e");
}

Dlg_mine::~Dlg_mine()
{
    delete ui;
}

// 根据用户ID从数据库加载用户信息
void Dlg_mine::loadUserInfo(int userId)
{
    QSqlQuery query;
    query.prepare("SELECT username, phone, gender FROM user WHERE userid = ?");
    query.addBindValue(userId);

    if (!query.exec()) {
        qDebug() << "数据库查询失败:" << query.lastError().text();
        QMessageBox::warning(this, "错误", "无法加载用户信息！");
        return;
    }

    if (query.next()) {
        QString username = query.value(0).toString();
        QString phone = query.value(1).toString();
        QString gender = query.value(2).toString();

        // 设置到对应的Label上
        ui->lbl_username->setText(username);
        ui->lbl_phone->setText(phone);
        ui->lbl_userid->setText(QString::number(userId));  // 将 userid 转换为字符串
        ui->lbl_sex->setText(gender);
    } else {
        QMessageBox::warning(this, "错误", "未找到用户信息！");
    }
}

void Dlg_mine::on_editPassword_clicked()
{
    PasswordEdit *Pa = new PasswordEdit();
    Pa->show();
}

void Dlg_mine::loadCount()
{
    int count = 0;
    QSqlQuery query;
    query.prepare("SELECT flightid FROM schedule WHERE userid = :userid");
    query.bindValue(":userid", userid);
    if (query.exec()) {
        count = 0;
        while (query.next()) {
            count++;
        }
    } else {
        qDebug() << "查询失败：" << query.lastError().text();
    }
    ui->lbl_cost_count->setText(QString::number(count));
    ui->lbl_level->setText(QString::number(count / 5));
}

void Dlg_mine::on_btn_refresh_clicked()
{
    loadCount();
}


void Dlg_mine::on_btn_exit_clicked()
{
    // 实现方法：使用 QProcess 重新启动当前应用程序
    QApplication::quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());

}

