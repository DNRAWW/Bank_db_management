#include "../../includes/repository/mock_repository.hpp"
#include <stdexcept>

MockRepository::~MockRepository() {
    for(it = db.begin(); it != db.end();) {
        delete it->second;
        db.erase(it);
    }
}

void MockRepository::addCustomer(Customer *customer) {
    int numberOfItems = db.bucket_count();

    uint64_t customerId = customer->getId();

    if(db.count(customerId) != 0) {
        throw std::runtime_error("There is already a customer with that id");
    }

    else {
        db.insert(std::make_pair(customerId, customer));
    }
}

void MockRepository::deleteById(uint64_t id) {
    it = db.find(id);

    if(it == db.end()){
        throw std::runtime_error("The item with given id does not exist");
    }

    else {
        delete it -> second;
        db.erase(it);
    }
}

std::vector<Customer*>  MockRepository::findAll() {
   std::vector<Customer*> allCustomers;

   for(it = db.begin(); it != db.end(); it++) {
       allCustomers.push_back(it->second);
   }

   return allCustomers;
}

Customer* MockRepository::findById(uint64_t id) {
    it = db.find(id);

    if(it == db.end()){
        throw std::runtime_error("The item with given id does not exist");
    } 
    else {
        return it->second;
    }
}