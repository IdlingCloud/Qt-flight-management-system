/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *option;
    QGridLayout *gridLayout;
    QPushButton *btn_mine;
    QPushButton *btn_flight;
    QPushButton *btn_schedule;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QStackedWidget{background:#1e1e1e}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        option = new QWidget(centralwidget);
        option->setObjectName("option");
        option->setMinimumSize(QSize(100, 600));
        option->setMaximumSize(QSize(100, 600));
        option->setStyleSheet(QString::fromUtf8("QPushButton{border:none;background-color:rgb(84,92,100);color:white;font:18px,'\346\245\267\344\275\223'}\n"
"QPushButton::checked{background-color:rgb(67,74,100)}\n"
"QWidget{background-color:rgb(84,92,100)}"));
        gridLayout = new QGridLayout(option);
        gridLayout->setObjectName("gridLayout");
        btn_mine = new QPushButton(option);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_mine);
        btn_mine->setObjectName("btn_mine");
        btn_mine->setMinimumSize(QSize(0, 80));
        btn_mine->setCheckable(true);

        gridLayout->addWidget(btn_mine, 2, 0, 1, 1);

        btn_flight = new QPushButton(option);
        buttonGroup->addButton(btn_flight);
        btn_flight->setObjectName("btn_flight");
        btn_flight->setMinimumSize(QSize(0, 80));
        btn_flight->setCheckable(true);
        btn_flight->setChecked(true);

        gridLayout->addWidget(btn_flight, 0, 0, 1, 1);

        btn_schedule = new QPushButton(option);
        buttonGroup->addButton(btn_schedule);
        btn_schedule->setObjectName("btn_schedule");
        btn_schedule->setMinimumSize(QSize(0, 80));
        btn_schedule->setCheckable(true);
        btn_schedule->setChecked(false);

        gridLayout->addWidget(btn_schedule, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout_2->addWidget(option, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setTabletTracking(false);

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\350\210\252\347\251\272", nullptr));
        btn_mine->setText(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204", nullptr));
        btn_flight->setText(QCoreApplication::translate("MainWindow", "\346\234\272\347\245\250", nullptr));
        btn_schedule->setText(QCoreApplication::translate("MainWindow", "\350\241\214\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
