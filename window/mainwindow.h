#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QPushButton>
#include "dlg_flight.h"
#include "dlg_schedule.h"
#include "dlg_mine.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initPage();

public slots:
    void dealMenu();

private:
    Ui::MainWindow *ui;
    Dlg_flight *flightPage;
    Dlg_schedule *schedulePage;
    Dlg_mine *minePage;
};
#endif // MAINWINDOW_H
