#include "dlg_edit.h"
#include "ui_dlg_edit.h"
#include "status.h"


PasswordEdit::PasswordEdit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PasswordEdit)
{
    ui->setupUi(this);
}

PasswordEdit::~PasswordEdit()
{
    delete ui;
}

void PasswordEdit::on_pushButton_regist_clicked()
{
    // 获取旧密码、新密码和确认密码
    QString oldPassword = ui->txt_old->text();
    QString newPassword = ui->txt_new->text();
    QString confirmPassword = ui->txt_confirm->text();

    // 验证旧密码
    if (!verifyOldPassword(oldPassword)) {
        ui->lbl_checkold->setText("密码不正确！请重试");
        return;
    }

    // 验证新密码和确认密码是否一致
    if (newPassword != confirmPassword) {
        ui->lbl_check->setText("密码不一致！请重试");
        return;
    }

    // 如果验证通过，更新密码
    if (updatePassword(newPassword)) {
        ui->lbl_check->setText("修改成功！");
        // 使用定时器隐藏提示信息
        QTimer *timer = new QTimer(this);
        timer->setSingleShot(true);  // 设置为单次触发

        connect(timer, &QTimer::timeout, this, &PasswordEdit::hide);

        timer->start(1000);  // 1秒后隐藏
    } else {
        ui->lbl_check->setText("修改失败，请重试！");
    }
}

void PasswordEdit::on_pushButton_cancel_clicked()
{
    hide();
}

// 验证旧密码是否正确
bool PasswordEdit::verifyOldPassword(const QString &oldPassword)
{
    QSqlQuery query;
    query.prepare("SELECT password FROM user WHERE userid = ?");
    query.addBindValue(userid);  // 使用全局变量 userid

    if (!query.exec()) {
        qDebug() << "数据库查询失败:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        QString storedPassword = query.value(0).toString();
        return (storedPassword == oldPassword);
    }

    return false;
}

// 更新密码
bool PasswordEdit::updatePassword(const QString &newPassword)
{
    QSqlQuery query;
    query.prepare("UPDATE user SET password = ? WHERE userid = ?");
    query.addBindValue(newPassword);
    query.addBindValue(userid);  // 使用全局变量 userid

    if (!query.exec()) {
        qDebug() << "数据库更新失败:" << query.lastError().text();
        return false;
    }

    return true;
}
