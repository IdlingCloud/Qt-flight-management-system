/********************************************************************************
** Form generated from reading UI file 'passwordedit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDEDIT_H
#define UI_PASSWORDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordEdit
{
public:
    QLabel *label_oldPassword;
    QLineEdit *txt_old;
    QLabel *label_newPassword;
    QLineEdit *txt_new;
    QLabel *label_repeat;
    QLineEdit *txt_confirm;
    QPushButton *pushButton_regist;
    QPushButton *pushButton_cancel;
    QLabel *label_editcheck;
    QLabel *lbl_checkold;
    QLabel *lbl_check;

    void setupUi(QWidget *PasswordEdit)
    {
        if (PasswordEdit->objectName().isEmpty())
            PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->resize(400, 300);
        label_oldPassword = new QLabel(PasswordEdit);
        label_oldPassword->setObjectName("label_oldPassword");
        label_oldPassword->setGeometry(QRect(100, 60, 71, 41));
        QFont font;
        font.setPointSize(12);
        label_oldPassword->setFont(font);
        label_oldPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txt_old = new QLineEdit(PasswordEdit);
        txt_old->setObjectName("txt_old");
        txt_old->setGeometry(QRect(190, 70, 113, 20));
        label_newPassword = new QLabel(PasswordEdit);
        label_newPassword->setObjectName("label_newPassword");
        label_newPassword->setGeometry(QRect(100, 110, 71, 41));
        label_newPassword->setFont(font);
        label_newPassword->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txt_new = new QLineEdit(PasswordEdit);
        txt_new->setObjectName("txt_new");
        txt_new->setGeometry(QRect(190, 120, 113, 20));
        label_repeat = new QLabel(PasswordEdit);
        label_repeat->setObjectName("label_repeat");
        label_repeat->setGeometry(QRect(70, 160, 111, 41));
        label_repeat->setFont(font);
        label_repeat->setAlignment(Qt::AlignmentFlag::AlignCenter);
        txt_confirm = new QLineEdit(PasswordEdit);
        txt_confirm->setObjectName("txt_confirm");
        txt_confirm->setGeometry(QRect(190, 170, 113, 20));
        pushButton_regist = new QPushButton(PasswordEdit);
        pushButton_regist->setObjectName("pushButton_regist");
        pushButton_regist->setGeometry(QRect(100, 240, 61, 31));
        pushButton_regist->setFont(font);
        pushButton_cancel = new QPushButton(PasswordEdit);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(240, 240, 61, 31));
        pushButton_cancel->setFont(font);
        label_editcheck = new QLabel(PasswordEdit);
        label_editcheck->setObjectName("label_editcheck");
        label_editcheck->setGeometry(QRect(90, 210, 81, 21));
        label_editcheck->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_checkold = new QLabel(PasswordEdit);
        lbl_checkold->setObjectName("lbl_checkold");
        lbl_checkold->setGeometry(QRect(180, 40, 131, 31));
        QFont font1;
        font1.setPointSize(10);
        lbl_checkold->setFont(font1);
        lbl_check = new QLabel(PasswordEdit);
        lbl_check->setObjectName("lbl_check");
        lbl_check->setGeometry(QRect(180, 140, 131, 31));
        lbl_check->setFont(font1);

        retranslateUi(PasswordEdit);

        QMetaObject::connectSlotsByName(PasswordEdit);
    } // setupUi

    void retranslateUi(QWidget *PasswordEdit)
    {
        PasswordEdit->setWindowTitle(QCoreApplication::translate("PasswordEdit", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_oldPassword->setText(QCoreApplication::translate("PasswordEdit", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_newPassword->setText(QCoreApplication::translate("PasswordEdit", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_repeat->setText(QCoreApplication::translate("PasswordEdit", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_regist->setText(QCoreApplication::translate("PasswordEdit", "\344\277\256\346\224\271", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("PasswordEdit", "\345\217\226\346\266\210", nullptr));
        label_editcheck->setText(QString());
        lbl_checkold->setText(QString());
        lbl_check->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PasswordEdit: public Ui_PasswordEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDEDIT_H
