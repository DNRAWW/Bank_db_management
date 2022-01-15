#include "../../includes/provider/MockProvider.hpp"
#include "../../includes/repository/mock_repository.hpp"
#include <iostream>

MockProvider::MockProvider() {
    repository = new MockRepository();
}

MockProvider::~MockProvider() {
    delete repository;
}

void MockProvider::connect() {
    std::cout << "nothing to do" << std::endl;
}

void MockProvider::disconnect() {
    std::cout << "nothing to do" << std::endl;
}

Repository* MockProvider::getRepository() {
    return repository;
}
