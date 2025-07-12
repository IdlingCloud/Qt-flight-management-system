#ifndef DLG_SCHEDULE_H
#define DLG_SCHEDULE_H

#include <QDialog>

namespace Ui {
class Dlg_schedule;
}

class Dlg_schedule : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_schedule(QWidget *parent = nullptr);
    ~Dlg_schedule();
    void loadTicketInfo();

private slots:
    void on_btn_refresh_clicked();

private:
    Ui::Dlg_schedule *ui;
    //QVector<int> localCountArray;
};

#endif // DLG_SCHEDULE_H
