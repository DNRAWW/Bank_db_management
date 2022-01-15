#ifndef __BANK_MANAGMENT_H_INCLUDED__
#define __BANK_MANAGMENT_H_INCLUDED__

#include "../provider/provider.hpp"

class BankManagment {
    public: 
        BankManagment(Provider* provider);
        void add();
        void deleteById(uint64_t id);
        std::vector<Customer*> getAllCustomers();
        Customer* getOneCustomer(uint64_t id);

    private:
        Provider* provider;
        Repository* repository;
};

#endif