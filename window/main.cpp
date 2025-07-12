#include "mainwindow.h"
#include "dlg_login.h"
#include "dlg_regist.h"
#include "lib/SQLmgr.h"
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dlg_login dlg_login;

    // 初始化数据库管理器
    SQLmgr::getInstance()->init();

    bool isRegistered = false; // 新增一个标志，表示是否注册成功

    while (true) {
        // 执行登录窗口的事件循环
        int r = dlg_login.exec();

        if (r == 0) {
            // 用户选择退出，直接退出程序
            return 0;
        }
        else if (r == 1) {
            dlg_login.hide();
            // 用户选择登录成功，进入主窗口
            MainWindow w;
            w.show();
            return a.exec();  // 返回主事件循环
        }
        else if (r == 2) {
            // 用户选择注册，打开注册窗口
            Regist *r = new Regist();
            r->show();

            // 通过信号和槽机制获取注册是否成功
            QObject::connect(r, &Regist::registrationSuccess, [&]() {
                // 如果注册成功，标记为成功
                isRegistered = true;
            });

            // 通过事件循环等待注册窗口关闭
            a.processEvents();  // 允许事件循环继续处理其他事件

            // 等待直到注册窗口关闭后继续执行以下代码
            while (r->isVisible()) {
                a.processEvents();  // 继续处理事件直到注册窗口关闭
            }

            // 如果注册成功，则跳回循环，继续等待登录或其他操作
            if (isRegistered) {
                isRegistered = false; // 重置标志
                continue;  // 回到循环等待下一个操作
            }
        }
    }

    return 0;
}
