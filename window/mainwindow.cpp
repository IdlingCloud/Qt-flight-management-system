#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "status.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , flightPage(nullptr)
    , schedulePage(nullptr)
    , minePage(nullptr)
{
    ui->setupUi(this);
    initPage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initPage(){
    flightPage=new Dlg_flight(this);
    schedulePage=new Dlg_schedule(this);
    minePage= new Dlg_mine(this);
    ui->stackedWidget->addWidget(flightPage);
    ui->stackedWidget->addWidget(schedulePage);
    ui->stackedWidget->addWidget(minePage);
    ui->stackedWidget->setCurrentIndex(0);

    auto c=ui->option->children();
    for(auto it: c){
        if(it->objectName().contains("btn")){
            connect(static_cast<QPushButton*>(it),
                    &QPushButton::clicked,this,&MainWindow::dealMenu);
            // the same as:
            // connect(static_cast<QPushButton*>(it),SIGNAL(QPushButton::clicked()),this,SLOT(dealMenu()));
        }
    }
}

void MainWindow::dealMenu(){
    int index;
    auto name=sender()->objectName();
    if(name=="btn_flight")index=0;
    else if(name=="btn_schedule")index=1;
    else index=2;

    ui->stackedWidget->setCurrentIndex(index);
}

