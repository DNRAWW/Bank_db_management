#include "../../includes/customer/customer.hpp"
#include <math.h>
#include <stdexcept>

Customer::Customer(std::string firstName, std::string lastName, std::string middleName, Sexes sex, std::string dateOfBirth,
                    std::string address, float amountOfMoney, bool isInDebt = false, float amountOfDebt = 0.0)
                    : Human(firstName, lastName, middleName, sex, dateOfBirth) {

    
    
    setAddress(address);
    
    if(amountOfMoney < 0.0) {
       throw std::runtime_error("Amount of money cannot be negative");
    }
    else {
        setAmountOfMoney(amountOfMoney);
    }

    if(isInDebt && amountOfDebt < 0.0) {
        throw std::runtime_error("Debt cannot be negative");
    }

    else if(isInDebt && amountOfDebt == 0.0) {
        throw std::runtime_error("Debt cannot equal 0");
    } 
    
    else if( (isInDebt && amountOfDebt > 0.0) || (!isInDebt && amountOfDebt > 0.0) ) {
        setDebtStatus(true);
        setAmountOfDebt(amountOfDebt);
    }

    else {
        setDebtStatus(false);
        setAmountOfDebt(0.0);
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

float Customer::getAmountOfDebt(){
    return amountOfDebt;
}

void Customer::setAddress(std::string address){
    Customer::address = address;
}

void Customer::setDebtStatus(bool status){
    inDebt = status;
}

void Customer::setAmountOfMoney(float money){
    amountOfMoney = money;
}

void Customer::changeAmountOfMoney(float changeInMoney){
    amountOfMoney += changeInMoney;
}

void Customer::setAmountOfDebt(float debt){
    amountOfDebt = debt;
    
    if(amountOfDebt > 0.0) {
        setDebtStatus(true);
    }
    
    else {
        setAmountOfDebt(0.0);
        setDebtStatus(false);
    }
}

void Customer::changeAmountOfDebt(float changeInDebt){
    amountOfDebt += changeInDebt;

    if(!isInDebt() && amountOfDebt > 0.0) {
        setDebtStatus(true);
    }

    else if(isInDebt() && amountOfDebt <= 0.0) {
        setDebtStatus(false);

        if(amountOfDebt < 0) {
            changeAmountOfMoney(std::fabs(amountOfDebt));
        }
    }
}