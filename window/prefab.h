#ifndef PREFAB_H
#define PREFAB_H

#include <QDialog>
#include <QLabel>
#include <QTime>
#include <QString>
#include <QRegularExpression>
#include "dlg_pay.h"

namespace Ui {
class prefab; //FlightInfoWidget
}

class prefab : public QDialog
{
    Q_OBJECT

public:
    explicit prefab(QWidget *parent = nullptr);
    ~prefab();
    void setFlightInfoWhitConstrain(QStringList);

private slots:
    void on_btn_buy_clicked();

private:
    Ui::prefab *ui;
};



#endif // PREFAB_H
