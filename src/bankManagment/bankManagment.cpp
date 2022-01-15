#include "../../includes/bankManagment/bankManagment.hpp"

BankManagment::BankManagment(Provider* provider) {
    BankManagment::provider = provider;
    // provider->connect(); for postgres
    repository = provider->getRepository();
}

BankManagment::~BankManagment() {
    // provider->disconnect(); for postgres
}

void BankManagment::deleteById(uint64_t id) {
    repository->deleteById(id);
}

std::vector<Customer*> BankManagment::getAllCustomers() {
    return repository->findAll();
}

Customer* BankManagment::getOneCustomer(uint64_t id) {
    return repository->findById(id);
}

void BankManagment::add(Customer* customer) {
    repository->addCustomer(customer);
}