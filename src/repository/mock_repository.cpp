#include "../../includes/repository/mock_repository.hpp"
#include <stdexcept>
#include <iostream>

template <class T>
MockRepository<T>::~MockRepository() {
    for(it = db.begin(); it != db.end();) {
        delete it->second;
        db.erase(it);
    }
}

template <class T>
void MockRepository<T>::add(T* entity) {
    int numberOfItems = db.size();

    entity->setId(numberOfItems + 1);

    db.insert(std::make_pair(numberOfItems + 1, entity));
}

template <class T>
void MockRepository<T>::deleteById(uint64_t id) {
    it = db.find(id);

    if(it == db.end()){
        throw "The item with given id does not exist";
    }

    else {
        db.erase(it);
    }
}

template <class T>
std::vector<T*>  MockRepository<T>::findAll() {
   std::vector<T*> allEntities;

   for(it = db.begin(); it != db.end(); it++) {
       allEntities.push_back(it->second);
   }

   return allEntities;
}

template <class T>
T* MockRepository<T>::findById(uint64_t id) {
    it = db.find(id);

    if(it == db.end()){
        throw "The item with given id does not exist";
    } 
    else {
        return it->second;
    }
}

// linker error prevention

template MockRepository<Customer>::~MockRepository();