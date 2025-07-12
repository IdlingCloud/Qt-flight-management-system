#include "dlg_flight.h"
#include "ui_dlg_flight.h"
#include "prefab.h"
#include "status.h"
#include "lib/SQLmgr.h"


Dlg_flight::~Dlg_flight()
{
    delete ui;
}

Dlg_flight::Dlg_flight(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_flight)
{
    ui->setupUi(this);

    #pragma region "选择日期"{

    QDate currentDate=QDate::currentDate();
    int currentMonth=currentDate.month();
    //int currentDay=currentDate.day();

    // for(int m=1;m<=12;m++){
    //     ui->cbb_month->addItem((QString::number(m)));
    // }
    ui->cbb_month->addItem((QString::number(1)));

    ui->cbb_month->setCurrentIndex(currentMonth-1);
    updateDayComboBox();
    ui->cbb_day->setCurrentIndex(0);

    connect(ui->cbb_month, SIGNAL(currentIndexChanged(int)),this,SLOT(updateDayComboBox()));
    connect(ui->cbb_day, SIGNAL(currentIndexChanged(int)),this,SLOT(onDateSelected()));

    #pragma endregion }


    #pragma region "选择地点"{

    ui->cbb_start->addItems({"北京", "上海", "广州"});
    ui->cbb_start->setCurrentIndex(2);
    ui->cbb_end->addItems({"北京", "上海", "广州"});
    startCity = ui->cbb_start->currentText();
    endCity = ui->cbb_end->currentText();

    connect(ui->cbb_start,SIGNAL(currentIndexChanged(int)),this,SLOT(validateEndCities()));
    connect(ui->cbb_end,SIGNAL(currentIndexChanged(int)),this,SLOT(validateStartCities()));

    #pragma endregion }
}

void Dlg_flight::updateDayComboBox(){
    ui->cbb_day->clear();

    selectedMonth=ui->cbb_month->currentText().toInt();

    QDate currentDate = QDate::currentDate();

    QDate endDate=currentDate.addDays(10);

    int maxDaysInMonth=QDate(currentDate.year(),selectedMonth,1).daysInMonth();

    int maxDay,minDay;
    if(endDate.month()!=selectedMonth){
        minDay=1;
        maxDay=maxDaysInMonth;
    }
    else{
        minDay=currentDate.day();
        maxDay=endDate.day();
    }

    for(int day=minDay;day<=maxDay;day++){
        ui->cbb_day->addItem(QString::number(day));
    }
    ui->cbb_day->setCurrentIndex(0);

}

void Dlg_flight::onDateSelected(){
    selectedDay=ui->cbb_day->currentText().toInt();
}

void Dlg_flight::validateEndCities() // 选择出发地时,确保目的地与出发地不同
{
    startCity = ui->cbb_start->currentText();

    if (startCity == endCity) {
        QMessageBox::warning(this, "Invalid Selection", "出发地和目的地不能是相同的城市！");

        ui->cbb_end->setCurrentIndex((ui->cbb_end->currentIndex() + 1) % ui->cbb_end->count());
    }
}

void Dlg_flight::validateStartCities() // 选择目的地时,确保出发地与目的地不同
{
    endCity = ui->cbb_end->currentText();

    if (startCity == endCity) {
        QMessageBox::warning(this, "Invalid Selection", "出发地和目的地不能是相同的城市！");

        ui->cbb_start->setCurrentIndex((ui->cbb_end->currentIndex() + 1) % ui->cbb_end->count());
    }
}

void Dlg_flight::on_tb_swap_clicked()
{
    int startIndex = ui->cbb_start->currentIndex();
    int endIndex = ui->cbb_end->currentIndex();

    ui->cbb_end->setCurrentIndex(999); // 将cbb_end先置空,避免在交换的瞬间存在出发地和目的地相同的情况
    ui->cbb_start->setCurrentIndex(endIndex);
    ui->cbb_end->setCurrentIndex(startIndex);

    startCity = ui->cbb_start->currentText();
    endCity = ui->cbb_end->currentText();
}

void Dlg_flight::on_tb_select_clicked()
{
    selectedMonth=ui->cbb_month->currentText().toInt();
    selectedDay=ui->cbb_day->currentText().toInt();
    selectedDate.setDate(QDate::currentDate().year(), selectedMonth, selectedDay);
    count++;
    date.append(selectedDate);
    qDebug()<<"selectedDate: "<<selectedDate;

    while (auto *widget = ui->layout->takeAt(0)) {
        delete widget->widget();
        delete widget;
    }

    auto isToday = [](const QDate &date) -> bool {
        return date == QDate::currentDate();
    };

    auto isCurrentTimeMoreThanClock=[](const QString &clock)->bool {
        QTime currentTime = QTime::currentTime();
        QTime targetTime = QTime::fromString(clock, "hh:mm");
        return currentTime > targetTime;
    };

    // 使用参数startCity,endCity查询数据库
    // 返回匹配的结果数,通过引用获得匹配成功的航班的具体信息
    // 每个constrain(即constrainVec[i])包含:flightid(0),start(1),end(2),date(3),clock(4),during(5),price(6)
    QVector<QStringList> constrainVec;
    int result=SQLmgr::getInstance()->queryDateBase(startCity,endCity,constrainVec);
    for(int i=0;i<result;i++){
        if(isToday(selectedDate) && isCurrentTimeMoreThanClock(constrainVec[i][4])) continue;

        prefab* pre=new prefab(this);
        pre->setFlightInfoWhitConstrain(constrainVec[i]);
        ui->layout->addWidget(pre);
    }
}
