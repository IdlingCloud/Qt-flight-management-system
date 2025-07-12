/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticket
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QLabel *lbl_flightid;
    QLabel *lbl_time_start;
    QLabel *lbl_time_end;
    QLabel *lbl_start;
    QLabel *lbl_end;
    QLabel *lbl_during;
    QLabel *lbl_arrow;
    QPushButton *btn_cancel;
    QLabel *lbl_before;
    QLabel *lbl_date;
    QLabel *lbl_info;
    QLabel *label;
    QLabel *lbl_time;
    QLabel *label_2;

    void setupUi(QWidget *ticket)
    {
        if (ticket->objectName().isEmpty())
            ticket->setObjectName("ticket");
        ticket->resize(691, 140);
        groupBox = new QGroupBox(ticket);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 691, 141));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 681, 121));
        lbl_flightid = new QLabel(widget);
        lbl_flightid->setObjectName("lbl_flightid");
        lbl_flightid->setGeometry(QRect(320, 10, 51, 19));
        lbl_time_start = new QLabel(widget);
        lbl_time_start->setObjectName("lbl_time_start");
        lbl_time_start->setGeometry(QRect(80, 0, 91, 51));
        QFont font;
        font.setPointSize(20);
        lbl_time_start->setFont(font);
        lbl_time_end = new QLabel(widget);
        lbl_time_end->setObjectName("lbl_time_end");
        lbl_time_end->setGeometry(QRect(400, 0, 91, 51));
        lbl_time_end->setFont(font);
        lbl_start = new QLabel(widget);
        lbl_start->setObjectName("lbl_start");
        lbl_start->setGeometry(QRect(110, 50, 54, 16));
        lbl_end = new QLabel(widget);
        lbl_end->setObjectName("lbl_end");
        lbl_end->setGeometry(QRect(420, 50, 54, 16));
        lbl_during = new QLabel(widget);
        lbl_during->setObjectName("lbl_during");
        lbl_during->setGeometry(QRect(260, 60, 71, 20));
        lbl_arrow = new QLabel(widget);
        lbl_arrow->setObjectName("lbl_arrow");
        lbl_arrow->setGeometry(QRect(250, 30, 81, 31));
        lbl_arrow->setPixmap(QPixmap(QString::fromUtf8(":/res/arrow_right.svg")));
        lbl_arrow->setScaledContents(true);
        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setGeometry(QRect(590, 20, 71, 61));
        lbl_before = new QLabel(widget);
        lbl_before->setObjectName("lbl_before");
        lbl_before->setGeometry(QRect(260, 10, 61, 19));
        lbl_date = new QLabel(widget);
        lbl_date->setObjectName("lbl_date");
        lbl_date->setGeometry(QRect(80, 70, 281, 19));
        lbl_info = new QLabel(widget);
        lbl_info->setObjectName("lbl_info");
        lbl_info->setGeometry(QRect(380, 70, 161, 19));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 100, 191, 19));
        lbl_time = new QLabel(widget);
        lbl_time->setObjectName("lbl_time");
        lbl_time->setGeometry(QRect(230, 100, 131, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 100, 251, 19));

        retranslateUi(ticket);

        QMetaObject::connectSlotsByName(ticket);
    } // setupUi

    void retranslateUi(QWidget *ticket)
    {
        ticket->setWindowTitle(QCoreApplication::translate("ticket", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ticket", "\350\275\246\347\245\250", nullptr));
        lbl_flightid->setText(QCoreApplication::translate("ticket", "1", nullptr));
        lbl_time_start->setText(QCoreApplication::translate("ticket", "<html><head/><body><p><span style=\" color:#ffffff;\">06:45</span></p></body></html>", nullptr));
        lbl_time_end->setText(QCoreApplication::translate("ticket", "<html><head/><body><p><span style=\" color:#ffffff;\">09:00</span></p></body></html>", nullptr));
        lbl_start->setText(QCoreApplication::translate("ticket", "\347\231\275\344\272\221", nullptr));
        lbl_end->setText(QCoreApplication::translate("ticket", "\350\231\271\346\241\245", nullptr));
        lbl_during->setText(QCoreApplication::translate("ticket", "2\345\260\217\346\227\26615\345\210\206", nullptr));
        lbl_arrow->setText(QString());
        btn_cancel->setText(QCoreApplication::translate("ticket", "\351\200\200\347\245\250", nullptr));
        lbl_before->setText(QCoreApplication::translate("ticket", "\347\251\272\345\256\242A01", nullptr));
        lbl_date->setText(QCoreApplication::translate("ticket", "\345\217\221\350\275\246\346\227\245\346\234\237\357\274\232", nullptr));
        lbl_info->setText(QCoreApplication::translate("ticket", "\350\275\246\347\245\250\344\273\205\345\275\223\346\227\245\345\275\223\346\254\241\346\234\211\346\225\210", nullptr));
        label->setText(QCoreApplication::translate("ticket", "\350\257\267\346\263\250\346\204\217\357\274\232\350\267\235\347\246\273\350\210\252\347\217\255\345\274\200\345\247\213", nullptr));
        lbl_time->setText(QCoreApplication::translate("ticket", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">\350\277\230\346\234\211\344\270\215\345\210\26024\345\260\217\346\227\266</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ticket", "\350\257\267\345\246\245\345\226\204\345\256\211\346\216\222\346\202\250\347\232\204\346\227\266\351\227\264\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticket: public Ui_ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
