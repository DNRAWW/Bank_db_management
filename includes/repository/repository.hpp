#ifndef __REPOSITORY_H_INCLUDED__
#define __REPOSITORY_H_INCLUDED__

#include "../customer/customer.hpp"

enum Order: char {
    DESC = 'D',
    ASC = 'A'
};


class Repository {
    public:
        Repository();
        ~Repository();

        virtual void add(Customer &customer) = 0;
        virtual void deleteById(std::string id) = 0;
        virtual void deleteByProperty(std::string property) = 0;
        virtual void findAll() = 0;
        virtual void findById(std::string id);
        virtual void findByProperty(std::string property, bool IsOrdered = false, Order order = DESC);
};

#endif