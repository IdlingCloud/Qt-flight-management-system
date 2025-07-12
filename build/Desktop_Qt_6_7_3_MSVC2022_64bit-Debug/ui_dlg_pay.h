/********************************************************************************
** Form generated from reading UI file 'dlg_pay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_PAY_H
#define UI_DLG_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QPushButton *btn_pay;
    QPushButton *btn_cancel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lbl_time;
    QRadioButton *radio_BankCard;
    QRadioButton *radio_Alipay;
    QRadioButton *radio_WeChat;
    QLabel *label_4;
    QLabel *lbl_status;
    QLineEdit *le_account;
    QLineEdit *le_pwd;
    QLabel *lbl_picture;

    void setupUi(QWidget *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName("pay");
        pay->resize(302, 323);
        btn_pay = new QPushButton(pay);
        btn_pay->setObjectName("btn_pay");
        btn_pay->setGeometry(QRect(30, 250, 93, 28));
        btn_cancel = new QPushButton(pay);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(170, 250, 93, 28));
        label = new QLabel(pay);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 60, 121, 19));
        label_2 = new QLabel(pay);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 30, 41, 19));
        label_3 = new QLabel(pay);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 30, 91, 19));
        lbl_time = new QLabel(pay);
        lbl_time->setObjectName("lbl_time");
        lbl_time->setGeometry(QRect(70, 30, 131, 16));
        radio_BankCard = new QRadioButton(pay);
        radio_BankCard->setObjectName("radio_BankCard");
        radio_BankCard->setGeometry(QRect(160, 60, 118, 23));
        radio_BankCard->setChecked(true);
        radio_Alipay = new QRadioButton(pay);
        radio_Alipay->setObjectName("radio_Alipay");
        radio_Alipay->setGeometry(QRect(30, 100, 118, 23));
        radio_WeChat = new QRadioButton(pay);
        radio_WeChat->setObjectName("radio_WeChat");
        radio_WeChat->setGeometry(QRect(160, 100, 118, 23));
        label_4 = new QLabel(pay);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 0, 69, 19));
        lbl_status = new QLabel(pay);
        lbl_status->setObjectName("lbl_status");
        lbl_status->setGeometry(QRect(110, 0, 201, 19));
        le_account = new QLineEdit(pay);
        le_account->setObjectName("le_account");
        le_account->setGeometry(QRect(70, 140, 181, 25));
        le_pwd = new QLineEdit(pay);
        le_pwd->setObjectName("le_pwd");
        le_pwd->setGeometry(QRect(70, 190, 181, 25));
        lbl_picture = new QLabel(pay);
        lbl_picture->setObjectName("lbl_picture");
        lbl_picture->setGeometry(QRect(100, 130, 91, 91));
        lbl_picture->setPixmap(QPixmap(QString::fromUtf8(":/res/plane.svg")));
        lbl_picture->setScaledContents(true);

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QWidget *pay)
    {
        pay->setWindowTitle(QCoreApplication::translate("pay", "\346\224\257\344\273\230\347\225\214\351\235\242", nullptr));
        btn_pay->setText(QCoreApplication::translate("pay", "\346\224\257\344\273\230", nullptr));
        btn_cancel->setText(QCoreApplication::translate("pay", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("pay", "\350\257\267\351\200\211\346\213\251\346\224\257\344\273\230\346\226\271\345\274\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("pay", "\350\257\267\345\234\250", nullptr));
        label_3->setText(QCoreApplication::translate("pay", "\345\206\205\345\256\214\346\210\220\346\224\257\344\273\230\357\274\201", nullptr));
        lbl_time->setText(QCoreApplication::translate("pay", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">1\357\274\23200</span></p></body></html>", nullptr));
        radio_BankCard->setText(QCoreApplication::translate("pay", "\351\223\266\350\241\214\345\215\241", nullptr));
        radio_Alipay->setText(QCoreApplication::translate("pay", "\346\224\257\344\273\230\345\256\235", nullptr));
        radio_WeChat->setText(QCoreApplication::translate("pay", "\345\276\256\344\277\241\346\224\257\344\273\230", nullptr));
        label_4->setText(QCoreApplication::translate("pay", "\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232", nullptr));
        lbl_status->setText(QCoreApplication::translate("pay", "\345\276\205\346\224\257\344\273\230", nullptr));
        le_account->setText(QCoreApplication::translate("pay", "\350\257\267\350\276\223\345\205\245\345\215\241\345\217\267", nullptr));
        le_pwd->setText(QCoreApplication::translate("pay", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        lbl_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_PAY_H
