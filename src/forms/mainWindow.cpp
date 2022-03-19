#include "../../includes/forms/mainWindow.h"
#include "../../includes/forms/ui_mainWindow.h"
#include <iostream>

MainWindow::MainWindow(BankManagment<Customer>* bank, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    MainWindow::bank = bank;

    ui->setupUi(this);
    ui->allEntityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->getAllButton, SIGNAL(clicked()), SLOT(getAll()));
}

void MainWindow::getAll() {
    ui->allEntityTable->setRowCount(0);

    std::vector<Customer*> allCustomers = bank->getAll();

    for(int c = 0; c < allCustomers.size(); c++) {
        Customer* currentCustomer = allCustomers.at(c);

        std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

        printf("%-5li %-30s %2c %20s %12.2f %12s %10.2f \n", currentCustomer->getId(), 
                    currentCustomer->getFullName().c_str(), currentCustomer->getSex(),
                    currentCustomer->getDateOfBirth().c_str(), currentCustomer->getMoney(), 
                    debtStatusAnswer.c_str(), currentCustomer->getDebt());

        ui->allEntityTable->insertRow( ui->allEntityTable->rowCount() );

        QTableWidgetItem* id = new QTableWidgetItem(QString::number(currentCustomer->getId()));
        QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(currentCustomer->getFullName()));
        QTableWidgetItem* sex = new QTableWidgetItem(QChar(currentCustomer->getSex()));
        QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(currentCustomer->getDateOfBirth()));
        QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(currentCustomer->getAddress()));
        QTableWidgetItem* money = new QTableWidgetItem(QString::number(currentCustomer->getMoney()));
        QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
        QTableWidgetItem* debt = new QTableWidgetItem(QString::number(currentCustomer->getDebt()));

        ui->allEntityTable->setItem(c, 0, id);
        ui->allEntityTable->setItem(c, 1, fullName);
        ui->allEntityTable->setItem(c, 2, sex);
        ui->allEntityTable->setItem(c, 3, dateOfBirth);
        ui->allEntityTable->setItem(c, 4, address);
        ui->allEntityTable->setItem(c, 5, money);
        ui->allEntityTable->setItem(c, 6, debtStatus);
        ui->allEntityTable->setItem(c, 7, debt);
    }
}
