#include "dlg_schedule.h"
#include "ui_dlg_schedule.h"
#include "ticket.h"
#include "status.h"
#include <QSqlQuery>
#include <QSqlError>

Dlg_schedule::Dlg_schedule(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_schedule)
{
    ui->setupUi(this);
    loadTicketInfo();
}

Dlg_schedule::~Dlg_schedule()
{
    delete ui;
}

void Dlg_schedule::loadTicketInfo()
{
    QLayoutItem *item;
    while ((item = ui->layout->takeAt(0)) != nullptr) {
        QWidget *widget = item->widget();
        if (widget) {
            widget->deleteLater();
        }
        delete item;
    }

    auto formatDateWithDayOfWeek = [](const QDate &date) -> QString {
        QLocale locale;
        QString dayOfWeek = locale.dayName(date.dayOfWeek());

        //return date.toString("yyyy-MM-dd") + "(" + dayOfWeek + ")";
        return date.toString("yyyy-MM-dd");
    };

    QSqlQuery scheduleQuery;
    scheduleQuery.prepare("SELECT flightid FROM schedule WHERE userid = :userid");
    scheduleQuery.bindValue(":userid", userid);
    if(!scheduleQuery.exec()) {
        qDebug() << "查询失败";
    }
    int localCount=-1;
    while (scheduleQuery.next()) {
        int flightId = scheduleQuery.value(0).toInt();
        // 查询 flight 表获取详细信息
        QSqlQuery flightQuery;
        flightQuery.prepare("SELECT start, end, date, clock, during FROM flight WHERE flightid = :flightid");
        flightQuery.bindValue(":flightid", flightId);
        if(!flightQuery.exec()) {
            qDebug() << "flight查询失败";
        }
        while (flightQuery.next()) {
            ticket *t = new ticket(this);

            // 填充航班信息到 ticket
            t->setFlightid(flightId);
            t->setStart(flightQuery.value(0).toString());
            t->setEnd(flightQuery.value(1).toString());

            localCount++;
            qDebug()<<"localCount: "<<localCount;
            if(localCount<date.size()){
                t->setDate(formatDateWithDayOfWeek(date[localCount]));
                t->setTime(formatDateWithDayOfWeek(date[localCount]));
            }

            t->setTimeStart(flightQuery.value(3).toString());
            t->setTimeEnd(flightQuery.value(3).toString(), flightQuery.value(4).toString());
            t->setDuring(flightQuery.value(4).toString());
            // 将 ticket 添加到布局中
            ui->layout->addWidget(t);
        }
    }
}


void Dlg_schedule::on_btn_refresh_clicked()
{
    loadTicketInfo();
}

