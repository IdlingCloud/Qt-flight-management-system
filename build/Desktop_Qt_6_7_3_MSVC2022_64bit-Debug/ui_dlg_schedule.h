/********************************************************************************
** Form generated from reading UI file 'dlg_schedule.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_SCHEDULE_H
#define UI_DLG_SCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_schedule
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *layout;
    QPushButton *btn_refresh;
    QLabel *label;

    void setupUi(QDialog *Dlg_schedule)
    {
        if (Dlg_schedule->objectName().isEmpty())
            Dlg_schedule->setObjectName("Dlg_schedule");
        Dlg_schedule->resize(700, 600);
        Dlg_schedule->setMinimumSize(QSize(700, 600));
        Dlg_schedule->setMaximumSize(QSize(700, 600));
        verticalLayoutWidget_2 = new QWidget(Dlg_schedule);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 80, 700, 521));
        layout = new QVBoxLayout(verticalLayoutWidget_2);
        layout->setObjectName("layout");
        layout->setContentsMargins(0, 0, 0, 0);
        btn_refresh = new QPushButton(Dlg_schedule);
        btn_refresh->setObjectName("btn_refresh");
        btn_refresh->setGeometry(QRect(580, 20, 111, 51));
        label = new QLabel(Dlg_schedule);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 361, 61));

        retranslateUi(Dlg_schedule);

        QMetaObject::connectSlotsByName(Dlg_schedule);
    } // setupUi

    void retranslateUi(QDialog *Dlg_schedule)
    {
        Dlg_schedule->setWindowTitle(QCoreApplication::translate("Dlg_schedule", "Dialog", nullptr));
        btn_refresh->setText(QCoreApplication::translate("Dlg_schedule", "\345\210\267\346\226\260\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Dlg_schedule", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\346\254\242\350\277\216\346\237\245\347\234\213\346\202\250\347\232\204\350\210\252\347\217\255\344\277\241\346\201\257\357\274\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_schedule: public Ui_Dlg_schedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_SCHEDULE_H
