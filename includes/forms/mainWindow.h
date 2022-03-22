#ifndef C_MAINWINDOW_H
#define C_MAINWINDOW_H

#include <QMainWindow>
#include "../bankManagment/bankManagment.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(BankManagment<Customer>* bank, QWidget *parent = nullptr);

private:
    Ui::MainWindow *ui;
    BankManagment<Customer>* bank;

private slots:
    void getAll();
    void getOne();
    // void add();
    // void delete();
};
#endif // C_MAINWINDOW_H
