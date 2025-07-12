/********************************************************************************
** Form generated from reading UI file 'prefab.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFAB_H
#define UI_PREFAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prefab
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *lbl_flightid;
    QLabel *lbl_time_start;
    QLabel *lbl_time_end;
    QLabel *lbl_start;
    QLabel *lbl_end;
    QLabel *lbl_during;
    QLabel *lbl_arrow;
    QPushButton *btn_buy;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_price1;
    QLabel *lbl_price;
    QLabel *lbl_before;

    void setupUi(QDialog *prefab)
    {
        if (prefab->objectName().isEmpty())
            prefab->setObjectName("prefab");
        prefab->resize(700, 100);
        prefab->setMinimumSize(QSize(700, 100));
        prefab->setMaximumSize(QSize(700, 100));
        prefab->setStyleSheet(QString::fromUtf8("QWidget{background:#353637}\n"
"QWidget{background:#4d4e4e}\n"
"QPushButton{background:#f6bd40;color:white;}\n"
"QPushButton:hover{background:#f9d483;}\n"
"QLabel#lbl_price{color:#f6bd40}\n"
"QLabel#lbl_start,#lbl_end{color:rgb(85, 255, 255);font:14px}\n"
"QLabel#lbl_time_start,#lbl_time_end{color:white;font:20px}"));
        gridLayout = new QGridLayout(prefab);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(prefab);
        widget->setObjectName("widget");
        lbl_flightid = new QLabel(widget);
        lbl_flightid->setObjectName("lbl_flightid");
        lbl_flightid->setGeometry(QRect(80, 39, 51, 21));
        lbl_time_start = new QLabel(widget);
        lbl_time_start->setObjectName("lbl_time_start");
        lbl_time_start->setGeometry(QRect(150, 30, 51, 31));
        lbl_time_end = new QLabel(widget);
        lbl_time_end->setObjectName("lbl_time_end");
        lbl_time_end->setGeometry(QRect(310, 30, 51, 31));
        lbl_start = new QLabel(widget);
        lbl_start->setObjectName("lbl_start");
        lbl_start->setGeometry(QRect(160, 60, 54, 16));
        lbl_end = new QLabel(widget);
        lbl_end->setObjectName("lbl_end");
        lbl_end->setGeometry(QRect(320, 60, 54, 16));
        lbl_during = new QLabel(widget);
        lbl_during->setObjectName("lbl_during");
        lbl_during->setGeometry(QRect(223, 30, 71, 20));
        lbl_arrow = new QLabel(widget);
        lbl_arrow->setObjectName("lbl_arrow");
        lbl_arrow->setGeometry(QRect(210, 50, 81, 31));
        lbl_arrow->setPixmap(QPixmap(QString::fromUtf8(":/res/arrow_right.svg")));
        lbl_arrow->setScaledContents(true);
        btn_buy = new QPushButton(widget);
        btn_buy->setObjectName("btn_buy");
        btn_buy->setGeometry(QRect(580, 40, 91, 21));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(480, 30, 67, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_price1 = new QLabel(layoutWidget);
        lbl_price1->setObjectName("lbl_price1");
        QFont font;
        font.setPointSize(10);
        lbl_price1->setFont(font);
        lbl_price1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lbl_price1);

        lbl_price = new QLabel(layoutWidget);
        lbl_price->setObjectName("lbl_price");
        QFont font1;
        font1.setPointSize(16);
        lbl_price->setFont(font1);
        lbl_price->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(lbl_price);

        lbl_before = new QLabel(widget);
        lbl_before->setObjectName("lbl_before");
        lbl_before->setGeometry(QRect(20, 40, 61, 19));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(prefab);

        QMetaObject::connectSlotsByName(prefab);
    } // setupUi

    void retranslateUi(QDialog *prefab)
    {
        prefab->setWindowTitle(QCoreApplication::translate("prefab", "Dialog", nullptr));
        lbl_flightid->setText(QCoreApplication::translate("prefab", "1", nullptr));
        lbl_time_start->setText(QCoreApplication::translate("prefab", "06:45", nullptr));
        lbl_time_end->setText(QCoreApplication::translate("prefab", "09:00", nullptr));
        lbl_start->setText(QCoreApplication::translate("prefab", "\347\231\275\344\272\221", nullptr));
        lbl_end->setText(QCoreApplication::translate("prefab", "\350\231\271\346\241\245", nullptr));
        lbl_during->setText(QCoreApplication::translate("prefab", "2\345\260\217\346\227\26615\345\210\206", nullptr));
        lbl_arrow->setText(QString());
        btn_buy->setText(QCoreApplication::translate("prefab", "\350\256\242\347\245\250", nullptr));
        lbl_price1->setText(QCoreApplication::translate("prefab", "\302\245", nullptr));
        lbl_price->setText(QCoreApplication::translate("prefab", "450", nullptr));
        lbl_before->setText(QCoreApplication::translate("prefab", "\347\251\272\345\256\242A01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prefab: public Ui_prefab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFAB_H
