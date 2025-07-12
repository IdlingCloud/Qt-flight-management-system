#ifndef TICKET_H
#define TICKET_H

#include <QWidget>
#include <QTime>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class ticket;
}

class ticket : public QWidget
{
    Q_OBJECT

public:
    explicit ticket(QWidget *parent = nullptr);
    ~ticket();

    void setFlightid(int id);
    void setStart(const QString &start);
    void setEnd(const QString &end);
    void setDate(const QString &date);
    void setTime(const QString &date);
    void setTimeStart(const QString &clock);
    void setTimeEnd(const QString &clock, const QString &during);
    void setDuring(const QString &during);

private slots:
    void on_btn_cancel_clicked();

private:
    Ui::ticket *ui;
};

#endif // TICKET_H
