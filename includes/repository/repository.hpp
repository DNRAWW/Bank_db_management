#ifndef __REPOSITORY_H_INCLUDED__
#define __REPOSITORY_H_INCLUDED__

#include "../customer/customer.hpp"

#include <vector>

template <class T>
class Repository {
    public:
        virtual void add(T *entity) = 0;
        virtual void deleteById(uint64_t id) = 0;
        virtual std::vector<T*> findAll() = 0;
        virtual T* findById(uint64_t id) = 0;
};

#endif