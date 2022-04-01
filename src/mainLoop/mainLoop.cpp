#include "../../includes/mainLoop/mainLoop.hpp"
#include "../../includes/forms/mainWindow.h"
#include <iostream>
#include <QtWidgets>
#include <string>

int mainLoop(int argc, char **argv) {
    QApplication app(argc, argv);

    BankManagment<Customer> bankManagment(providerFactory<Customer>());

    MainWindow w(&bankManagment);

    w.show();

    return app.exec();
}