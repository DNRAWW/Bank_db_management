// main.cpp for testing and running the programm

#include "../../includes/repository/mock_repository.hpp"
#include <iostream>
#include <stdlib.h>

int main() {
    
    Customer customer(1, "Kostya", "Moguchev", "Andrey", MALE, "27/02/2002", "Pr.Kulturi d 24 k 1 appartment 68", 10000.0f);
    
    MockRepository repository;

    repository.addCustomer(&customer);
    repository.addCustomer(new Customer(2, "Vova", "Musika", "Vova", MALE, "12/10/2003", "dwafwafaw", 50000.0f, true, 1000.0f));
    repository.addCustomer(new Customer(3, "AWgagwa", "waGawg", "HSga", FEMALE, "22/05/1989", "dwafwafaw", 22515.0f));
    repository.addCustomer(new Customer(4, "AWFAgawga", "GAWaga", "HAwg", FEMALE, "02/12/1973", "Ddasda", 2151.0f, true, 15315.0f));

    std::vector<Customer*> allCustomers = repository.findAll();

    printf("%2s %-30s %2s %20s %12s %12s %10s \n", "Id", "FullName", "Sex", "Date of birth", "Money", "Is in debt?", "Debt");

    for(int c = 0; c < 4; c++) {
       
        Customer* currentCustomer = allCustomers.at(c);

        std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

        printf("%2i %-30s %2c %20s %12.2f %12s %10.2f \n", currentCustomer->getId(), 
                    currentCustomer->getFullName().c_str(), currentCustomer->getSex(),
                    currentCustomer->getDateOfBirth().c_str(), currentCustomer->getMoney(), 
                    debtStatusAnswer.c_str(), currentCustomer->getDebt());
    }
}