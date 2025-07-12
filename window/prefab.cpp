#include "prefab.h"
#include "ui_prefab.h"
#include "status.h"

prefab::prefab(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::prefab)
{
    ui->setupUi(this);
}

prefab::~prefab()
{
    delete ui;
}

void prefab::setFlightInfoWhitConstrain(QStringList constrain)
{
    auto addTime = [](const QString &startTime, const QString &duration) -> QString {
        // 解析开始时间
        QTime time = QTime::fromString(startTime, "hh:mm");
        if (!time.isValid()) {
            return "Invalid start time";
        }

        // 使用正则表达式来解析持续时间
        QRegularExpression regex("(\\d+)小时(\\d+)分");
        QRegularExpressionMatch match = regex.match(duration);

        if (match.hasMatch()) {
            // 获取小时和分钟
            int hours = match.captured(1).toInt();
            int minutes = match.captured(2).toInt();

            // 计算总分钟数
            int totalMinutes = hours * 60 + minutes;

            // 将总分钟数加到开始时间上
            time = time.addSecs(totalMinutes * 60);

            // 返回新的时间字符串
            return time.toString("hh:mm");
        } else {
            return "Invalid duration format";
        }
    };

    auto randomString = [&](const QString str1, const QString str2) -> QString {
        return (std::rand() % 2 == 0) ? str1 : str2;
    };

    // 数据库没有存机场,为了更"真实"这里随机选择机场,
    // 但是当用户在没有改变出发地或目的地的情况下再次按下"选择"时,就会露馅
    auto getAirport=[&](const QString& city)->QString{
        if(city=="北京")return randomString("首都","大兴");
        else if(city=="上海")return randomString("虹桥","浦东");
        else return "白云";
    };

    //constrain包含:flightid(0),start(1),end(2),date(3),clock(4),during(5),price(6)
    ui->lbl_flightid->setText(constrain[0]); ui->lbl_flightid->setStyleSheet("QLabel { color: #3fc6ff; }");
    ui->lbl_start->setText(getAirport(constrain[1]));
    ui->lbl_end->setText(getAirport(constrain[2]));
    ui->lbl_time_start->setText(constrain[4]);
    ui->lbl_time_end->setText(addTime(constrain[4],constrain[5]));
    ui->lbl_during->setText(constrain[5]);
    ui->lbl_price->setText(constrain[6]);
}

void prefab::on_btn_buy_clicked()
{
    flightid = (ui->lbl_flightid->text()).toInt();
    pay *p = new pay();
    p->show();
}

