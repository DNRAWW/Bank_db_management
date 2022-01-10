#include "../../includes/customer/customer.hpp"
#include <math.h>
#include <stdexcept>

Customer::Customer(uint64_t id, std::string firstName, std::string lastName, std::string middleName, Sexes sex, std::string dateOfBirth,
                    std::string address, float amountOfMoney, bool isInDebt, float amountOfDebt)
                    : Human(id, firstName, lastName, middleName, sex, dateOfBirth) {

    
    
    setAddress(address);
    
    if(amountOfMoney < 0.0f) {
       throw std::runtime_error("Amount of money cannot be negative");
    }

    else {
        setAmountOfMoney(amountOfMoney);
    }

    if(isInDebt && amountOfDebt < 0.0f) {
        throw std::runtime_error("Debt cannot be negative");
    }

    else if(isInDebt && amountOfDebt == 0.0f) {
        throw std::runtime_error("Debt cannot equal 0");
    } 
    
    else if( (isInDebt && amountOfDebt > 0.0f) || (!isInDebt && amountOfDebt > 0.0f) ) {
        setDebtStatus(true);
        setAmountOfDebt(amountOfDebt);
    }

    else {
        setAmountOfDebt(0.0f);
        setDebtStatus(false);
    }
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
            changeAmountOfMoney(std::fabs(amountOfDebt));
        }
    }
}