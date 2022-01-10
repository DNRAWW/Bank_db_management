// main.cpp for testing and running the programm

#include "../../includes/customer/customer.hpp"
#include <iostream>

int main() {
    
    Customer customer("Kostya", "Moguchev", "Andrey", MALE, "27/02/2002", "Pr.Kulturi d 24 k 1 appartment 68", 10000.0f);

    std::string debtStatusAnswer = customer.isInDebt() ? "Yes" : "No";

    std::cout   << "Full name - " << customer.getFullName() << "\n"
                << "Address - " << customer.getAddress() << "\n"
                << "Money in the bank - " << customer.getMoney() << "$\n"
                << "Is the customer in debt - " << debtStatusAnswer << "\n"
                << "Debt - " << customer.getDebt();
}