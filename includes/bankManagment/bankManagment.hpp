#ifndef __BANK_MANAGMENT_H_INCLUDED__
#define __BANK_MANAGMENT_H_INCLUDED__

#include "../provider/provider.hpp"

template <class T>
class BankManagment {
    public: 
        BankManagment(Provider<T>* provider);
        ~BankManagment();
        void add(T* entity);
        void deleteById(uint64_t id);
        std::vector<T*> getAll();
        T* getOne(uint64_t id);

    private:
        Provider<T>* provider;
        Repository<T>* repository;
};

#endif