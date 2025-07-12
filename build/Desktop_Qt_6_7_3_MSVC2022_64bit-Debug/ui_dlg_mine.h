/********************************************************************************
** Form generated from reading UI file 'dlg_mine.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_MINE_H
#define UI_DLG_MINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dlg_mine
{
public:
    QLabel *label_basicInfo;
    QLabel *label_totalCost;
    QPushButton *editPassword;
    QLabel *label_basicInfo_2;
    QGroupBox *groupBox;
    QLabel *label_userid;
    QLabel *lbl_userid;
    QLabel *label_phone;
    QLabel *label_gender;
    QLabel *label_level;
    QLabel *lbl_sex;
    QLabel *lbl_phone;
    QLabel *lbl_level;
    QPushButton *btn_exit;
    QLabel *lbl_username;
    QLabel *label_totalCost_2;
    QLabel *lbl_cost_count;
    QPushButton *btn_refresh;

    void setupUi(QDialog *Dlg_mine)
    {
        if (Dlg_mine->objectName().isEmpty())
            Dlg_mine->setObjectName("Dlg_mine");
        Dlg_mine->resize(700, 600);
        Dlg_mine->setMinimumSize(QSize(700, 600));
        Dlg_mine->setMaximumSize(QSize(700, 600));
        label_basicInfo = new QLabel(Dlg_mine);
        label_basicInfo->setObjectName("label_basicInfo");
        label_basicInfo->setGeometry(QRect(130, 10, 130, 50));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_basicInfo->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        label_basicInfo->setFont(font);
        label_basicInfo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_totalCost = new QLabel(Dlg_mine);
        label_totalCost->setObjectName("label_totalCost");
        label_totalCost->setGeometry(QRect(90, 440, 161, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_totalCost->setPalette(palette1);
        QFont font1;
        font1.setPointSize(14);
        label_totalCost->setFont(font1);
        label_totalCost->setAlignment(Qt::AlignmentFlag::AlignCenter);
        editPassword = new QPushButton(Dlg_mine);
        editPassword->setObjectName("editPassword");
        editPassword->setGeometry(QRect(80, 360, 121, 61));
        QPalette palette2;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        editPassword->setPalette(palette2);
        QFont font2;
        font2.setPointSize(12);
        editPassword->setFont(font2);
        label_basicInfo_2 = new QLabel(Dlg_mine);
        label_basicInfo_2->setObjectName("label_basicInfo_2");
        label_basicInfo_2->setGeometry(QRect(410, 10, 130, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_basicInfo_2->setPalette(palette3);
        label_basicInfo_2->setFont(font);
        label_basicInfo_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox = new QGroupBox(Dlg_mine);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 110, 651, 231));
        label_userid = new QLabel(groupBox);
        label_userid->setObjectName("label_userid");
        label_userid->setGeometry(QRect(10, 30, 91, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_userid->setPalette(palette4);
        label_userid->setFont(font1);
        label_userid->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_userid = new QLabel(groupBox);
        lbl_userid->setObjectName("lbl_userid");
        lbl_userid->setGeometry(QRect(110, 30, 521, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_userid->setPalette(palette5);
        lbl_userid->setFont(font1);
        lbl_userid->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_phone = new QLabel(groupBox);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(10, 80, 91, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_phone->setPalette(palette6);
        label_phone->setFont(font1);
        label_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_gender = new QLabel(groupBox);
        label_gender->setObjectName("label_gender");
        label_gender->setGeometry(QRect(10, 130, 91, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_gender->setPalette(palette7);
        label_gender->setFont(font1);
        label_gender->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_level = new QLabel(groupBox);
        label_level->setObjectName("label_level");
        label_level->setGeometry(QRect(10, 180, 111, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_level->setPalette(palette8);
        label_level->setFont(font1);
        label_level->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_sex = new QLabel(groupBox);
        lbl_sex->setObjectName("lbl_sex");
        lbl_sex->setGeometry(QRect(110, 130, 531, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_sex->setPalette(palette9);
        lbl_sex->setFont(font1);
        lbl_sex->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName("lbl_phone");
        lbl_phone->setGeometry(QRect(110, 80, 521, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_phone->setPalette(palette10);
        lbl_phone->setFont(font1);
        lbl_phone->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_level = new QLabel(groupBox);
        lbl_level->setObjectName("lbl_level");
        lbl_level->setGeometry(QRect(110, 180, 521, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_level->setPalette(palette11);
        lbl_level->setFont(font1);
        lbl_level->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_exit = new QPushButton(Dlg_mine);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(270, 360, 121, 61));
        btn_exit->setFont(font2);
        lbl_username = new QLabel(Dlg_mine);
        lbl_username->setObjectName("lbl_username");
        lbl_username->setGeometry(QRect(280, 10, 90, 50));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_username->setPalette(palette12);
        lbl_username->setFont(font);
        lbl_username->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_totalCost_2 = new QLabel(Dlg_mine);
        label_totalCost_2->setObjectName("label_totalCost_2");
        label_totalCost_2->setGeometry(QRect(370, 440, 261, 41));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        label_totalCost_2->setPalette(palette13);
        label_totalCost_2->setFont(font1);
        label_totalCost_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lbl_cost_count = new QLabel(Dlg_mine);
        lbl_cost_count->setObjectName("lbl_cost_count");
        lbl_cost_count->setGeometry(QRect(260, 440, 131, 41));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        lbl_cost_count->setPalette(palette14);
        lbl_cost_count->setFont(font1);
        lbl_cost_count->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_refresh = new QPushButton(Dlg_mine);
        btn_refresh->setObjectName("btn_refresh");
        btn_refresh->setGeometry(QRect(470, 360, 121, 61));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        btn_refresh->setPalette(palette15);
        btn_refresh->setFont(font2);

        retranslateUi(Dlg_mine);

        QMetaObject::connectSlotsByName(Dlg_mine);
    } // setupUi

    void retranslateUi(QDialog *Dlg_mine)
    {
        Dlg_mine->setWindowTitle(QCoreApplication::translate("Dlg_mine", "Dialog", nullptr));
        label_basicInfo->setText(QCoreApplication::translate("Dlg_mine", "\345\260\212\346\225\254\347\232\204", nullptr));
        label_totalCost->setText(QCoreApplication::translate("Dlg_mine", "\346\202\250\345\267\262\347\264\257\350\256\241\350\256\242\347\245\250", nullptr));
        editPassword->setText(QCoreApplication::translate("Dlg_mine", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_basicInfo_2->setText(QCoreApplication::translate("Dlg_mine", "\357\274\214\346\202\250\345\245\275\357\274\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dlg_mine", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_userid->setText(QCoreApplication::translate("Dlg_mine", "\347\224\250\346\210\267ID\357\274\232", nullptr));
        lbl_userid->setText(QString());
        label_phone->setText(QCoreApplication::translate("Dlg_mine", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        label_gender->setText(QCoreApplication::translate("Dlg_mine", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_level->setText(QCoreApplication::translate("Dlg_mine", "\344\274\232\345\221\230\347\272\247\345\210\253\357\274\232", nullptr));
        lbl_sex->setText(QString());
        lbl_phone->setText(QString());
        lbl_level->setText(QString());
        btn_exit->setText(QCoreApplication::translate("Dlg_mine", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        lbl_username->setText(QString());
        label_totalCost_2->setText(QCoreApplication::translate("Dlg_mine", "\346\254\241\357\274\214\346\204\237\350\260\242\346\202\250\347\232\204\346\224\257\346\214\201\357\274\201", nullptr));
        lbl_cost_count->setText(QCoreApplication::translate("Dlg_mine", "10", nullptr));
        btn_refresh->setText(QCoreApplication::translate("Dlg_mine", "\345\210\267\346\226\260\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_mine: public Ui_Dlg_mine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_MINE_H
