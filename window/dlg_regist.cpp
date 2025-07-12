#include "dlg_regist.h"
#include "ui_dlg_regist.h"
#include <QMessageBox>  // 加入 QMessageBox 进行提示

Regist::Regist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Regist)
{
    ui->setupUi(this);
}

Regist::~Regist()
{
    delete ui;
}

void Regist::on_btn_regist_clicked()
{
    QString un = ui->txt_username->text();  // 获取用户名
    QString phone = ui->txt_phone->text();  // 获取手机号

    // 检查用户名是否为空或重复
    if (un.isEmpty()) {
        ui->lbl_check_name->setText("用户名不能为空！");
        return;
    }
    if (isUsernameExist(un)) {
        ui->lbl_check_name->setText("用户名重复请重新输入！");
        ui->txt_username->clear();  // 清空用户名输入框
        return;
    }

    // 检查手机号是否为空或重复
    if (phone.isEmpty()) {
        ui->lbl_phone->setText("手机号不能为空！");
        return;
    }
    if (isPhoneExist(phone)) {
        ui->lbl_phone->setText("手机号已注册，请重新输入！");
        ui->txt_phone->clear();  // 清空手机号输入框
        return;
    }

    // 清空提示标签
    ui->lbl_check_name->clear();
    ui->lbl_phone->clear();

    // 获取密码和确认密码
    QString pw = ui->txt_pwd->text();
    QString cfpw = ui->txt_confirmpwd->text();

    // 判断密码是否一致
    if (pw != cfpw) {
        ui->lbl_check->setText("与密码不同请重新输入！");
        ui->txt_confirmpwd->clear();
        return;
    }

    // 获取性别
    QString sex;
    if (ui->btn_sex1->isChecked()) {
        sex = "Male";
    } else if (ui->btn_sex2->isChecked()) {
        sex = "Female";
    }

    // 获取自增的用户ID
    int userid = getNextUserId();  // 获取下一个用户ID

    // 插入用户数据
    insertUserData(un, pw, sex, phone, userid);
}

bool Regist::isUsernameExist(const QString &username)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user WHERE username = ?");
    query.addBindValue(username);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    }

    return false;
}

bool Regist::isPhoneExist(const QString &phone)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user WHERE phone = ?");
    query.addBindValue(phone);

    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        return count > 0;  // 如果手机号已经存在，返回true
    }

    return false;
}

int Regist::getNextUserId()
{
    QSqlQuery query;
    query.prepare("SELECT MAX(userid) FROM user");  // 获取当前最大的userid
    if (query.exec() && query.next()) {
        int maxId = query.value(0).toInt();
        return maxId + 1;  // 自增1
    }
    return 1000;  // 如果表为空，从1000开始
}

void Regist::insertUserData(const QString &username, const QString &password, const QString &sex, const QString &phone, int userId)
{
    QSqlQuery query;
    query.prepare("INSERT INTO user (username, password, gender, phone, userid) VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(sex);
    query.addBindValue(phone);
    query.addBindValue(userId);

    if (!query.exec()) {
        qDebug() << "Error inserting user:" << query.lastError().text();
        return;
    } else {
        emit registrationSuccess();// 注册成功，发射信号
        // 更新 label_information 的文本为 "注册成功!"
        ui->label_information->setText("注册成功!");
        ui->lbl_check->setText("");

        QTimer::singleShot(1000, this, &Regist::close); // 1秒后关闭注册窗口
    }
}

void Regist::on_btn_cancel_clicked()
{
    emit registrationSuccess();
    QTimer::singleShot(1000, this, &Regist::close); // 1秒后关闭注册窗口
}
