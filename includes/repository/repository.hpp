#ifndef __REPOSITORY_H_INCLUDED__
#define __REPOSITORY_H_INCLUDED__

#include "../customer/customer.hpp"

#include <vector>

enum Order: char {
    DESC = 'D',
    ASC = 'A'
};


class Repository {
    public:
        virtual void addCustomer(Customer *customer) = 0;
        virtual void deleteById(uint64_t id) = 0;
        virtual std::vector<Customer*> findAll() = 0;
        virtual Customer* findById(uint64_t id) = 0;
};

#endif