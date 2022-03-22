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
    connect(ui->getOneButton, SIGNAL(clicked()), SLOT(getOne()));
}

void MainWindow::getAll() {
    ui->allEntityTable->setRowCount(0);

    std::vector<Customer*> allCustomers = bank->getAll();

    for(int c = 0; c < allCustomers.size(); c++) {
        Customer* currentCustomer = allCustomers.at(c);

        std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

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

void MainWindow::getOne() {
    
    try {
        Customer* customer = bank->getOne(ui->idInput_One->text().toInt());

        ui->oneEntityTable->setRowCount(0);
        ui->ErrorLable->setText("");

        std::string debtStatusAnswer = customer->isInDebt() ? "Yes" : "No";

        QTableWidgetItem* id = new QTableWidgetItem(QString::number(customer->getId()));
        QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(customer->getFullName()));
        QTableWidgetItem* sex = new QTableWidgetItem(QChar(customer->getSex()));
        QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(customer->getDateOfBirth()));
        QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(customer->getAddress()));
        QTableWidgetItem* money = new QTableWidgetItem(QString::number(customer->getMoney()));
        QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
        QTableWidgetItem* debt = new QTableWidgetItem(QString::number(customer->getDebt()));

        ui->oneEntityTable->insertRow( ui->oneEntityTable->rowCount() );

        ui->oneEntityTable->setItem(0, 0, id);
        ui->oneEntityTable->setItem(0, 1, fullName);
        ui->oneEntityTable->setItem(0, 2, sex);
        ui->oneEntityTable->setItem(0, 3, dateOfBirth);
        ui->oneEntityTable->setItem(0, 4, address);
        ui->oneEntityTable->setItem(0, 5, money);
        ui->oneEntityTable->setItem(0, 6, debtStatus);
        ui->oneEntityTable->setItem(0, 7, debt);

    } catch(char const* error) {
        ui->ErrorLable->setText(QString::fromStdString(error));
    }
}