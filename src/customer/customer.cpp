#include "../../includes/customer/customer.hpp"
#include <stdexcept>

Customer::Customer(Sexes sex, std::string dateOfBirth) : Human(sex, dateOfBirth) {
    setDebtStatus(false);
    setAmountOfDebt(0.0f);
}

std::string Customer::getAddress() {
    return address;
}

float Customer::getMoney() {
    return amountOfMoney;
}

bool Customer::isInDebt(){
    return inDebt;
}

float Customer::getDebt(){
    return amountOfDebt;
}

void Customer::setAddress(std::string address){
    Customer::address = address;
}

void Customer::setDebtStatus(bool status){
    if(!status && getDebt() > 0) {
        return;
    }
    else if(status && getDebt() == 0) {
        return;
    }
    else {
        inDebt = status;
    }
}

void Customer::setAmountOfMoney(float money){
    amountOfMoney = money;
}

void Customer::changeAmountOfMoney(float changeInMoney){
    amountOfMoney += changeInMoney;
}

void Customer::setAmountOfDebt(float debt){
    amountOfDebt = debt;
    
    if(amountOfDebt > 0) {
        setDebtStatus(true);
    }

    else {
        amountOfDebt = 0.0f;
        setDebtStatus(false);
    }
}

void Customer::changeAmountOfDebt(float changeInDebt){
    amountOfDebt += changeInDebt;

    if(!isInDebt() && amountOfDebt > 0.0f) {
        setDebtStatus(true);
    }

    else if(isInDebt() && amountOfDebt <= 0.0f) {
        setDebtStatus(false);

        if(amountOfDebt < 0.0f) {
            changeAmountOfMoney(abs(amountOfDebt));
        }
    }
}

void Customer::setId(uint64_t id) {
    Customer::id = id;
}