#include "../../includes/mainLoop/mainLoop.hpp"
#include "../../includes/forms/mainWindow.h"
#include <iostream>
#include <QtWidgets>
#include <string>

int mainLoop(int argc, char **argv) {
    QApplication app(argc, argv);

    Customer customer(MALE, "27/02/2002");

    customer.setFirstName("Kostya");
    customer.setLastName("Moguchev");
    customer.setMiddleName("Andery");
    customer.setAddress("Pr.Kulturi d 24 k 1 appartment 68");
    customer.setAmountOfMoney(10000.0f);

    Customer customer2(MALE, "27/02/2002");

    customer2.setFirstName("AWGAg");
    customer2.setLastName("WGagaha");
    customer2.setMiddleName("HaghwafA");
    customer2.setAddress("WAGaha");
    customer2.setAmountOfMoney(10000.0f);
    customer2.setAmountOfDebt(5000.0f);

    Provider<Customer>* provider = providerFactory<Customer>();

    BankManagment<Customer> bankManagment(provider);

    MainWindow w(&bankManagment);

    w.show();

    bankManagment.add(&customer);
    bankManagment.add(&customer2);

    std::vector<Customer*> allCustomers = bankManagment.getAll();

    printf("%-5s %-30s %2s %20s %12s %12s %10s \n", "Id", "FullName", "Sex", "Date of birth", "Money", "Is in debt?", "Debt");

    // for(int c = 0; c < allCustomers.size(); c++) {
    //     Customer* currentCustomer = allCustomers.at(c);

    //     std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

    //     printf("%-5li %-30s %2c %20s %12.2f %12s %10.2f \n", currentCustomer->getId(), 
    //                 currentCustomer->getFullName().c_str(), currentCustomer->getSex(),
    //                 currentCustomer->getDateOfBirth().c_str(), currentCustomer->getMoney(), 
    //                 debtStatusAnswer.c_str(), currentCustomer->getDebt());

    //     ui.allEntityTable->insertRow( ui.allEntityTable->rowCount() );

    //     QTableWidgetItem* id = new QTableWidgetItem(QString::number(currentCustomer->getId()));
    //     QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(currentCustomer->getFullName()));
    //     QTableWidgetItem* sex = new QTableWidgetItem(QChar(currentCustomer->getSex()));
    //     QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(currentCustomer->getDateOfBirth()));
    //     QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(currentCustomer->getAddress()));
    //     QTableWidgetItem* money = new QTableWidgetItem(QString::number(currentCustomer->getMoney()));
    //     QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
    //     QTableWidgetItem* debt = new QTableWidgetItem(QString::number(currentCustomer->getDebt()));

    //     ui.allEntityTable->setItem(c, 0, id);
    //     ui.allEntityTable->setItem(c, 1, fullName);
    //     ui.allEntityTable->setItem(c, 2, sex);
    //     ui.allEntityTable->setItem(c, 3, dateOfBirth);
    //     ui.allEntityTable->setItem(c, 4, address);
    //     ui.allEntityTable->setItem(c, 5, money);
    //     ui.allEntityTable->setItem(c, 6, debtStatus);
    //     ui.allEntityTable->setItem(c, 7, debt);
    // }

    return app.exec();
}