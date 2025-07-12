#ifndef SQLMGR_H
#define SQLMGR_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVector>
#include <QStringList>
#include <QDebug>
#include <QCoreApplication>
#include <QSqlRecord>


class SQLmgr{
public:
    SQLmgr(){}
    ~SQLmgr(){
        if (db.isOpen()) {
            db.close();
        }
    }

    QSqlDatabase db;

    static SQLmgr* getInstance(){
        if(instance==nullptr){
            instance=new SQLmgr();
        }
        return instance;
    }

    void init(){
        db=QSqlDatabase::addDatabase("QSQLITE");
        QString dbPath=QCoreApplication::applicationDirPath()+"/Flight.db";
        db.setDatabaseName(dbPath);

        if (!db.open()) {
            qDebug() << "Failed to connect to database:" << db.lastError().text();
            return;
        }
        else qDebug() << "database is successfully connected";

        #pragma region "显示数据库信息"{
        qDebug() << "Database Driver:" << db.driverName();  // 显示使用的数据库驱动
        qDebug() << "Database Name:" << db.databaseName();  // 显示数据库文件名
        qDebug() << "Database Path:" << db.databaseName();  // SQLite 数据库路径

        // 显示数据库中所有表的名称
        QSqlQuery query("SELECT name FROM sqlite_master WHERE type='table';");
        if (query.exec()) {
            while (query.next()) {
                qDebug() << "Table name:" << query.value(0).toString();  // 输出数据库中的所有表名
            }
            qDebug() << "finish retrieving table names";
        } else {
            qDebug() << "Failed to retrieve table names:" << query.lastError().text();
        }
        #pragma region}
    }

    int queryDateBase(const QString& start, const QString& end,
                      QVector<QStringList>& constrainVec)
    {
        QSqlQuery query(db);
        QString queryStr=QString("SELECT * FROM flight WHERE start='%1' AND end='%2'").arg(start).arg(end);

        if(!query.exec(queryStr)){
            qDebug() << "Query execution failed:" << query.lastError().text();
            return -1;
        }
        else qDebug() <<"query database successfully";

        int result=0;
        int col=query.record().count();

        while(query.next()){
            QStringList rowList;

            for(int i=0;i<col;i++){
                rowList.append(query.value(i).toString());
            }
            constrainVec.append(rowList);
            result++;
        }
        return result;
    }
    int querySchedule(int userid, QVector<QStringList>& constrainVec)
    {
        QSqlQuery query(db);
        QString queryStr=QString("SELECT * FROM schedule WHERE userid='%1'").arg(userid);

        if(!query.exec(queryStr)){
            qDebug() << "Query execution failed:" << query.lastError().text();
            return -1;
        }
        else qDebug() <<"query database successfully";

        int result=0;
        int col=query.record().count();

        while(query.next()){
            QStringList rowList;

            for(int i=0;i<col;i++){
                rowList.append(query.value(i).toString());
            }
            constrainVec.append(rowList);
            result++;
        }
        return result;
    }

    bool insertSchedule(int userid, int flightid) {
        QSqlQuery query(db);
        QString queryStr =QString("INSERT INTO schedule (userid, flightid) "
                                   "VALUES ('%1', '%2')").arg(userid).arg(flightid);

        if (!query.exec(queryStr)) {
            qDebug() << "Insert schedule failed:" << query.lastError().text();
            return false;
        }
        return true;
    }

    bool insertUser(int userid,QString username,QString phone,QString account,QString password) {
        QSqlQuery query(db);
        QString queryStr =QString("INSERT INTO user (userid,username,phone,account,password) "
                                   "VALUES ('%1','%2','%3','%4','%5')")
                               .arg(userid).arg(username).arg(phone).arg(account).arg(password);

        if (!query.exec(queryStr)) {
            qDebug() << "Insert schedule failed:" << query.lastError().text();
            return false;
        }
        return true;
    }

    bool addFlightToUser(int userid, int flightid) {
        QSqlQuery query(db);
        QString queryStr = "INSERT INTO user_flight (userid, flightid) VALUES (:userid, :flightid)";
        query.prepare(queryStr);
        query.bindValue(":userid", userid);
        query.bindValue(":flightid", flightid);

        if (!query.exec()) {
            qDebug() << "Add flight to user failed:" << query.lastError().text();
            return false;
        }
        return true;
    }

    bool removeFlightFromUser(int userid, int flightid) {
        QSqlQuery query(db);
        QString queryStr = "DELETE FROM user_flight WHERE userid = :userid AND flightid = :flightid";
        query.prepare(queryStr);
        query.bindValue(":userid", userid);
        query.bindValue(":flightid", flightid);

        if (!query.exec()) {
            qDebug() << "Remove flight from user failed:" << query.lastError().text();
            return false;
        }
        return true;
    }

    QVector<int> getFlightIdsForUser(int userid) {
        QVector<int> flightIds;
        QSqlQuery query(db);
        QString queryStr = "SELECT flightid FROM user_flight WHERE userid = :userid";
        query.prepare(queryStr);
        query.bindValue(":userid", userid);

        if (!query.exec()) {
            qDebug() << "Get flight IDs for user failed:" << query.lastError().text();
            return flightIds;
        }

        while (query.next()) {
            flightIds.append(query.value(0).toInt());
        }
        return flightIds;
    }

private:
    static SQLmgr* instance;
};


#endif // SQLMGR_H



