#ifndef __MOCK_REPOSITORY_H_INCLUDED__
#define __MOCK_REPOSITORY_H_INCLUDED__

#include "./repository.hpp"
#include <unordered_map>

class MockRepository : public Repository {
    public:
        ~MockRepository();

        void addCustomer(Customer *customer);
        void deleteById(uint64_t id);
        std::vector<Customer*> findAll();
        Customer* findById(uint64_t id);

    private:
        std::unordered_map <uint64_t, Customer*> db;
        std::unordered_map <uint64_t, Customer*>::iterator it;
};

#endif