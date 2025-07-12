#ifndef DLG_FLIGHT_H
#define DLG_FLIGHT_H

#include <QDialog>
#include <QDate>
#include <QComboBox>
#include <QMessageBox>
#include <QWidget>
#include <QVector>

namespace Ui {
class Dlg_flight;
}

class Dlg_flight : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_flight(QWidget *parent = nullptr);
    ~Dlg_flight();

    int selectedDay;
    int selectedMonth;
    QDate selectedDate;
    QString startCity;
    QString endCity;

public slots:
    void updateDayComboBox();
    void onDateSelected();
    void on_tb_swap_clicked();
    void validateEndCities();
    void validateStartCities();
private slots:
    void on_tb_select_clicked();

private:
    Ui::Dlg_flight *ui;
};

#endif // DLG_FLIGHT_H
