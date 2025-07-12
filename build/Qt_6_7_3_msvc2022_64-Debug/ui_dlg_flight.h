/********************************************************************************
** Form generated from reading UI file 'dlg_flight.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_FLIGHT_H
#define UI_DLG_FLIGHT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_flight
{
public:
    QGridLayout *gridLayout;
    QWidget *bg;
    QWidget *bar;
    QComboBox *cbb_end;
    QLabel *lb_icon1;
    QLabel *lbm;
    QToolButton *tb_select;
    QToolButton *tb_swap;
    QComboBox *cbb_start;
    QLabel *lb3;
    QLabel *lb_icon2;
    QLabel *lbd;
    QLabel *lb1;
    QLabel *lb2;
    QComboBox *cbb_day;
    QComboBox *cbb_month;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *layout;

    void setupUi(QDialog *Dlg_flight)
    {
        if (Dlg_flight->objectName().isEmpty())
            Dlg_flight->setObjectName("Dlg_flight");
        Dlg_flight->resize(700, 600);
        Dlg_flight->setMinimumSize(QSize(700, 600));
        Dlg_flight->setMaximumSize(QSize(700, 600));
        Dlg_flight->setStyleSheet(QString::fromUtf8("QWidget#bg{background:#1e1e1e}\n"
"QWidget#bar{background:#2e2f30}\n"
"QToolButton{background:#01ab70}\n"
"QToolButton#tb_select:hover{background:#007b4f}\n"
"QToolButton#tb_swap:hover{background:#007b4f}\n"
"\n"
""));
        gridLayout = new QGridLayout(Dlg_flight);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg = new QWidget(Dlg_flight);
        bg->setObjectName("bg");
        bar = new QWidget(bg);
        bar->setObjectName("bar");
        bar->setGeometry(QRect(0, -1, 701, 131));
        cbb_end = new QComboBox(bar);
        cbb_end->setObjectName("cbb_end");
        cbb_end->setGeometry(QRect(260, 50, 81, 50));
        cbb_end->setMinimumSize(QSize(0, 50));
        lb_icon1 = new QLabel(bar);
        lb_icon1->setObjectName("lb_icon1");
        lb_icon1->setGeometry(QRect(120, 10, 41, 41));
        lb_icon1->setPixmap(QPixmap(QString::fromUtf8(":/res/up.svg")));
        lb_icon1->setScaledContents(true);
        lbm = new QLabel(bar);
        lbm->setObjectName("lbm");
        lbm->setGeometry(QRect(430, 60, 16, 31));
        tb_select = new QToolButton(bar);
        tb_select->setObjectName("tb_select");
        tb_select->setGeometry(QRect(570, 40, 61, 61));
        tb_select->setText(QString::fromUtf8("\351\200\211\346\213\251"));
        tb_select->setCheckable(false);
        tb_swap = new QToolButton(bar);
        tb_swap->setObjectName("tb_swap");
        tb_swap->setGeometry(QRect(190, 30, 41, 71));
        tb_swap->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/swap.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tb_swap->setIcon(icon);
        tb_swap->setCheckable(false);
        tb_swap->setChecked(false);
        cbb_start = new QComboBox(bar);
        cbb_start->setObjectName("cbb_start");
        cbb_start->setGeometry(QRect(80, 49, 81, 50));
        cbb_start->setMinimumSize(QSize(0, 50));
        lb3 = new QLabel(bar);
        lb3->setObjectName("lb3");
        lb3->setGeometry(QRect(410, 20, 71, 21));
        lb_icon2 = new QLabel(bar);
        lb_icon2->setObjectName("lb_icon2");
        lb_icon2->setGeometry(QRect(300, 10, 41, 41));
        lb_icon2->setPixmap(QPixmap(QString::fromUtf8(":/res/down.svg")));
        lb_icon2->setScaledContents(true);
        lbd = new QLabel(bar);
        lbd->setObjectName("lbd");
        lbd->setGeometry(QRect(510, 60, 16, 31));
        lb1 = new QLabel(bar);
        lb1->setObjectName("lb1");
        lb1->setGeometry(QRect(69, 19, 51, 31));
        lb1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lb1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lb2 = new QLabel(bar);
        lb2->setObjectName("lb2");
        lb2->setGeometry(QRect(260, 20, 41, 31));
        lb2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lb2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cbb_day = new QComboBox(bar);
        cbb_day->addItem(QString());
        cbb_day->setObjectName("cbb_day");
        cbb_day->setGeometry(QRect(450, 50, 51, 51));
        cbb_month = new QComboBox(bar);
        cbb_month->setObjectName("cbb_month");
        cbb_month->setGeometry(QRect(370, 50, 51, 51));
        verticalLayoutWidget_2 = new QWidget(bg);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 130, 700, 471));
        layout = new QVBoxLayout(verticalLayoutWidget_2);
        layout->setObjectName("layout");
        layout->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(bg, 0, 0, 1, 1);


        retranslateUi(Dlg_flight);

        QMetaObject::connectSlotsByName(Dlg_flight);
    } // setupUi

    void retranslateUi(QDialog *Dlg_flight)
    {
        Dlg_flight->setWindowTitle(QCoreApplication::translate("Dlg_flight", "Dialog", nullptr));
        lb_icon1->setText(QString());
        lbm->setText(QCoreApplication::translate("Dlg_flight", "\346\234\210", nullptr));
        lb3->setText(QCoreApplication::translate("Dlg_flight", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        lb_icon2->setText(QString());
        lbd->setText(QCoreApplication::translate("Dlg_flight", "\346\227\245", nullptr));
        lb1->setText(QCoreApplication::translate("Dlg_flight", "\345\207\272\345\217\221", nullptr));
        lb2->setText(QCoreApplication::translate("Dlg_flight", "\345\210\260\350\276\276", nullptr));
        cbb_day->setItemText(0, QCoreApplication::translate("Dlg_flight", "24", nullptr));

        cbb_day->setCurrentText(QCoreApplication::translate("Dlg_flight", "24", nullptr));
        cbb_month->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dlg_flight: public Ui_Dlg_flight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_FLIGHT_H
