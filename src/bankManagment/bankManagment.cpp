#include "../../includes/bankManagment/bankManagment.hpp"

template <class T>
BankManagment<T>::BankManagment(Provider<T>* provider) {
    BankManagment::provider = provider;
    // provider->connect(); for postgres
    repository = provider->getRepository();
}

template <class T>
BankManagment<T>::~BankManagment() {
    provider->disconnect();
}

template <class T>
void BankManagment<T>::deleteById(uint64_t id) {
    repository->deleteById(id);
}

template <class T>
std::vector<T*> BankManagment<T>::getAll() {
    return repository->findAll();
}

template <class T>
T* BankManagment<T>::getOne(uint64_t id) {
    return repository->findById(id);
}

template <class T>
void BankManagment<T>::add(T* entity) {
    repository->add(entity);
}

// linker error prevention

template BankManagment<Customer>::BankManagment(Provider<Customer>* provider);
template BankManagment<Customer>::~BankManagment();
template void BankManagment<Customer>::add(Customer*);
template void BankManagment<Customer>::deleteById(uint64_t);
template std::vector<Customer*> BankManagment<Customer>::getAll();
template Customer* BankManagment<Customer>::getOne(uint64_t);