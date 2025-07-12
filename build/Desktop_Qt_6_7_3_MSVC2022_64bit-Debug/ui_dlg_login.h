/********************************************************************************
** Form generated from reading UI file 'dlg_login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LOGIN_H
#define UI_DLG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_login
{
public:
    QGridLayout *gridLayout;
    QWidget *bg;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLineEdit *le_username;
    QLineEdit *le_password;
    QLabel *lb_txt2;
    QLabel *lb_txt1;
    QLabel *lb_title;
    QPushButton *btn_signin;
    QLabel *lb_icon;

    void setupUi(QDialog *Dlg_login)
    {
        if (Dlg_login->objectName().isEmpty())
            Dlg_login->setObjectName("Dlg_login");
        Dlg_login->resize(500, 400);
        Dlg_login->setMinimumSize(QSize(500, 400));
        Dlg_login->setMaximumSize(QSize(500, 400));
        Dlg_login->setStyleSheet(QString::fromUtf8("QLabel#lb_title{font: 33px;color:white}\n"
"QLabel#lb_txt1,QLabel#lb_txt2{font: 18px, '\346\245\267\344\275\223';;color:white}\n"
"QLineEdit{border-radius:5px;border:1px solid gray;min-height:24px;background-color: lightyellow;}\n"
"QPushButton{border-radius:5px;background:#409eff;color: white;font: 17px, '\346\245\267\344\275\223'}\n"
"QWidget#bg{background:#2e2f30}"));
        gridLayout = new QGridLayout(Dlg_login);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg = new QWidget(Dlg_login);
        bg->setObjectName("bg");
        bg->setEnabled(true);
        bg->setStyleSheet(QString::fromUtf8(""));
        btn_login = new QPushButton(bg);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(50, 310, 121, 31));
        btn_exit = new QPushButton(bg);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(330, 310, 121, 31));
        le_username = new QLineEdit(bg);
        le_username->setObjectName("le_username");
        le_username->setGeometry(QRect(167, 191, 231, 30));
        le_password = new QLineEdit(bg);
        le_password->setObjectName("le_password");
        le_password->setGeometry(QRect(167, 241, 231, 30));
        lb_txt2 = new QLabel(bg);
        lb_txt2->setObjectName("lb_txt2");
        lb_txt2->setGeometry(QRect(80, 190, 81, 23));
        lb_txt2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lb_txt1 = new QLabel(bg);
        lb_txt1->setObjectName("lb_txt1");
        lb_txt1->setGeometry(QRect(110, 240, 51, 23));
        lb_txt1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lb_title = new QLabel(bg);
        lb_title->setObjectName("lb_title");
        lb_title->setGeometry(QRect(159, 55, 241, 101));
        lb_title->setStyleSheet(QString::fromUtf8(""));
        lb_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_signin = new QPushButton(bg);
        btn_signin->setObjectName("btn_signin");
        btn_signin->setGeometry(QRect(190, 310, 121, 31));
        lb_icon = new QLabel(bg);
        lb_icon->setObjectName("lb_icon");
        lb_icon->setGeometry(QRect(99, 75, 71, 71));
        lb_icon->setPixmap(QPixmap(QString::fromUtf8(":/res/plane_w.svg")));
        lb_icon->setScaledContents(true);

        gridLayout->addWidget(bg, 0, 0, 1, 1);


        retranslateUi(Dlg_login);

        QMetaObject::connectSlotsByName(Dlg_login);
    } // setupUi

    void retranslateUi(QDialog *Dlg_login)
    {
        Dlg_login->setWindowTitle(QCoreApplication::translate("Dlg_login", "\347\231\273\345\275\225", nullptr));
        btn_login->setText(QCoreApplication::translate("Dlg_login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Dlg_login", "\351\200\200\345\207\272", nullptr));
        le_username->setText(QString());
        le_password->setText(QString());
        lb_txt2->setText(QCoreApplication::translate("Dlg_login", "\347\224\250\346\210\267\345\220\215: ", nullptr));
        lb_txt1->setText(QCoreApplication::translate("Dlg_login", "\345\257\206\347\240\201: ", nullptr));
        lb_title->setText(QCoreApplication::translate("Dlg_login", "\350\210\252\347\217\255\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_signin->setText(QCoreApplication::translate("Dlg_login", "\346\263\250\345\206\214", nullptr));
        lb_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dlg_login: public Ui_Dlg_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LOGIN_H
