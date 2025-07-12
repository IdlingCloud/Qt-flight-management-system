#include "dlg_login.h"
#include "ui_dlg_login.h"
#include "status.h"  // 引入全局变量

Dlg_login::Dlg_login(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Dlg_login)
{
    ui->setupUi(this);
}

Dlg_login::~Dlg_login()
{
    delete ui;
}

void Dlg_login::on_btn_login_clicked()
{
    // 获取用户输入的用户名和密码
    QString username = ui->le_username->text();
    QString password = ui->le_password->text();

    // 检查用户名和密码是否为空
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "用户名或密码不能为空！");
        return;
    }

    // 验证用户名和密码
    if (validateLogin(username, password)) {
        // 如果验证成功，将用户ID保存到全局变量
        userid = getUserIdFromUsername(username);  // 获取用户ID

        // 如果成功登录，返回1并隐藏登录界面
        setResult(1);
        hide();
    } else {
        // 如果验证失败，提示错误
        QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
    }
}

void Dlg_login::on_btn_signin_clicked()
{
    setResult(2);  // 用户点击注册按钮，返回2
    hide();  // 隐藏登录界面
}

void Dlg_login::on_btn_exit_clicked()
{
    setResult(0);  // 用户点击退出按钮，返回0
    hide();  // 隐藏登录界面
}

// 用于验证用户名和密码
bool Dlg_login::validateLogin(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT password FROM user WHERE username = ?");
    query.addBindValue(username);

    if (!query.exec()) {
        qDebug() << "数据库查询失败:" << query.lastError().text();
        return false;  // 查询失败
    }

    if (query.next()) {
        QString dbPassword = query.value(0).toString();  // 获取数据库中的密码
        return dbPassword == password;  // 比较密码是否匹配
    }

    return false;  // 如果没有找到该用户，返回false
}

// 根据用户名获取userid
int Dlg_login::getUserIdFromUsername(const QString &username)
{
    QSqlQuery query;
    query.prepare("SELECT userid FROM user WHERE username = ?");
    query.addBindValue(username);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();  // 返回查询到的用户ID
    }

    return -1;  // 如果没有找到该用户，返回-1
}
