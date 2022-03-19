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

    return app.exec();
}