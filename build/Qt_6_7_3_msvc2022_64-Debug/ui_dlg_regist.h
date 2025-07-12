/********************************************************************************
** Form generated from reading UI file 'dlg_regist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_REGIST_H
#define UI_DLG_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regist
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLabel *label_password_2;
    QLineEdit *txt_username;
    QLineEdit *txt_pwd;
    QLineEdit *txt_confirmpwd;
    QLabel *label_password_3;
    QRadioButton *btn_sex1;
    QRadioButton *btn_sex2;
    QPushButton *btn_regist;
    QPushButton *btn_cancel;
    QLabel *label_information;
    QLabel *lbl_check;
    QLabel *lbl_check_name;
    QLabel *label_phone;
    QLineEdit *txt_phone;
    QLabel *lbl_phone;

    void setupUi(QWidget *Regist)
    {
        if (Regist->objectName().isEmpty())
            Regist->setObjectName("Regist");
        Regist->resize(400, 300);
        Regist->setStyleSheet(QString::fromUtf8("QLineEdit{color:white}\n"
"QPushButton{background:#409eff}"));
        label_username = new QLabel(Regist);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(80, 80, 71, 21));
        QFont font;
        font.setPointSize(12);
        label_username->setFont(font);
        label_username->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_password = new QLabel(Regist);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(90, 120, 61, 21));
        label_password->setFont(font);
        label_password->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_password_2 = new QLabel(Regist);
        label_password_2->setObjectName("label_password_2");
        label_password_2->setGeometry(QRect(70, 160, 81, 21));
        label_password_2->setFont(font);
        label_password_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txt_username = new QLineEdit(Regist);
        txt_username->setObjectName("txt_username");
        txt_username->setGeometry(QRect(200, 80, 113, 20));
        txt_pwd = new QLineEdit(Regist);
        txt_pwd->setObjectName("txt_pwd");
        txt_pwd->setGeometry(QRect(200, 120, 113, 20));
        txt_confirmpwd = new QLineEdit(Regist);
        txt_confirmpwd->setObjectName("txt_confirmpwd");
        txt_confirmpwd->setGeometry(QRect(200, 160, 113, 20));
        label_password_3 = new QLabel(Regist);
        label_password_3->setObjectName("label_password_3");
        label_password_3->setGeometry(QRect(90, 200, 61, 21));
        label_password_3->setFont(font);
        label_password_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_sex1 = new QRadioButton(Regist);
        btn_sex1->setObjectName("btn_sex1");
        btn_sex1->setGeometry(QRect(200, 200, 41, 21));
        btn_sex1->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        btn_sex2 = new QRadioButton(Regist);
        btn_sex2->setObjectName("btn_sex2");
        btn_sex2->setGeometry(QRect(260, 200, 41, 21));
        btn_sex2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        btn_regist = new QPushButton(Regist);
        btn_regist->setObjectName("btn_regist");
        btn_regist->setGeometry(QRect(100, 240, 71, 31));
        QFont font1;
        font1.setPointSize(11);
        btn_regist->setFont(font1);
        btn_cancel = new QPushButton(Regist);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(230, 240, 71, 31));
        btn_cancel->setFont(font1);
        label_information = new QLabel(Regist);
        label_information->setObjectName("label_information");
        label_information->setGeometry(QRect(90, 221, 91, 20));
        label_information->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_check = new QLabel(Regist);
        lbl_check->setObjectName("lbl_check");
        lbl_check->setGeometry(QRect(180, 180, 151, 21));
        lbl_check->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_check_name = new QLabel(Regist);
        lbl_check_name->setObjectName("lbl_check_name");
        lbl_check_name->setGeometry(QRect(180, 100, 151, 21));
        lbl_check_name->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_phone = new QLabel(Regist);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(80, 40, 71, 21));
        label_phone->setFont(font);
        label_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txt_phone = new QLineEdit(Regist);
        txt_phone->setObjectName("txt_phone");
        txt_phone->setGeometry(QRect(200, 40, 113, 20));
        lbl_phone = new QLabel(Regist);
        lbl_phone->setObjectName("lbl_phone");
        lbl_phone->setGeometry(QRect(170, 60, 171, 21));
        lbl_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Regist);

        QMetaObject::connectSlotsByName(Regist);
    } // setupUi

    void retranslateUi(QWidget *Regist)
    {
        Regist->setWindowTitle(QCoreApplication::translate("Regist", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label_username->setText(QCoreApplication::translate("Regist", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_password->setText(QCoreApplication::translate("Regist", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_password_2->setText(QCoreApplication::translate("Regist", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_password_3->setText(QCoreApplication::translate("Regist", "\346\200\247\345\210\253\357\274\232", nullptr));
        btn_sex1->setText(QCoreApplication::translate("Regist", "\347\224\267", nullptr));
        btn_sex2->setText(QCoreApplication::translate("Regist", "\345\245\263", nullptr));
        btn_regist->setText(QCoreApplication::translate("Regist", "\346\263\250\345\206\214", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Regist", "\345\217\226\346\266\210", nullptr));
        label_information->setText(QString());
        lbl_check->setText(QString());
        lbl_check_name->setText(QString());
        label_phone->setText(QCoreApplication::translate("Regist", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        lbl_phone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Regist: public Ui_Regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_REGIST_H
