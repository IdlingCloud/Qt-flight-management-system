#ifndef DLG_EDIT_H
#define DLG_EDIT_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QTimer>

namespace Ui {
class PasswordEdit;
}

class PasswordEdit : public QWidget
{
    Q_OBJECT

public:
    explicit PasswordEdit(QWidget *parent = nullptr);
    ~PasswordEdit();

private slots:
    void on_pushButton_regist_clicked();

    void on_pushButton_cancel_clicked();
    bool verifyOldPassword(const QString &oldPassword);
    bool updatePassword(const QString &newPassword);

private:
    Ui::PasswordEdit *ui;
};

#endif // DLG_EDIT_H
