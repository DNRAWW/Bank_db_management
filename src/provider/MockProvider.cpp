#include "../../includes/provider/MockProvider.hpp"
#include "../../includes/repository/mock_repository.hpp"
#include <iostream>

template <class T>
MockProvider<T>::MockProvider() {
    MockProvider::repository = new MockRepository<T>();
}

template <class T>
MockProvider<T>::~MockProvider() {
    delete MockProvider::repository;
}

template <class T>
void MockProvider<T>::connect() {
    std::cout << "nothing to do" << std::endl;
}

template <class T>
void MockProvider<T>::disconnect() {
    std::cout << "nothing to do" << std::endl;
}

template <class T>
Repository<T>* MockProvider<T>::getRepository() {
    return MockProvider::repository;
}

// linker error prevention

template MockProvider<Customer>::MockProvider();