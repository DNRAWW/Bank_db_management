#include "../../includes/bankManagment/bankManagment.hpp"
#include "../../includes/providerFactory/providerFactory.hpp"
#include <iostream>

int main() {
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

    Provider* provider = providerFactory();

    BankManagment bankManagment(provider);

    bankManagment.add(&customer);
    bankManagment.add(&customer2);

    std::vector<Customer*> allCustomers = bankManagment.getAllCustomers();

    printf("%-5s %-30s %2s %20s %12s %12s %10s \n", "Id", "FullName", "Sex", "Date of birth", "Money", "Is in debt?", "Debt");

    for(int c = 0; c < allCustomers.size(); c++) {
       
        Customer* currentCustomer = allCustomers.at(c);

        std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

        printf("%-5i %-30s %2c %20s %12.2f %12s %10.2f \n", currentCustomer->getId(), 
                    currentCustomer->getFullName().c_str(), currentCustomer->getSex(),
                    currentCustomer->getDateOfBirth().c_str(), currentCustomer->getMoney(), 
                    debtStatusAnswer.c_str(), currentCustomer->getDebt());
    }
}