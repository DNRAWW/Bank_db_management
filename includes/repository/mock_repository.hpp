#ifndef __MOCK_REPOSITORY_H_INCLUDED__
#define __MOCK_REPOSITORY_H_INCLUDED__

#include "./repository.hpp"
#include <unordered_map>

template <class T>
class MockRepository : public Repository<T> {
    public:
        ~MockRepository();

        void add(T *entity);
        void deleteById(uint64_t id);
        std::vector<T*> findAll();
        T* findById(uint64_t id);

    private:
        std::unordered_map <uint64_t, T*> db;
        typename std::unordered_map <uint64_t, T*>::iterator it;
};

#endif