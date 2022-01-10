#ifndef __CUSTOMER_H_INCLUDED__
#define __CUSTOMER_H_INCLUDED__

#include "../human/human.hpp"

class Customer : public Human {
    public:
        Customer(std::string firstName, std::string lastName, std::string middleName, Sexes sex, std::string dateOfBirth,
                std::string address, float moneyInTheBank, bool isInDebt = false, float amountOfDebt = 0.0f);

        // Getters
        
        std::string getAddress();
        float getMoney();
        bool isInDebt();
        float getAmountOfDebt();

        // Setters

        void setAddress(std::string address);
        void setDebtStatus(bool status);

        void setAmountOfMoney(float money);
        void changeAmountOfMoney(float changeInMoney);
        
        void setAmountOfDebt(float debt);
        void changeAmountOfDebt(float changeInDebt);

    private:
        std::string address;
        float amountOfMoney; // cannot be smaller than 0
        bool inDebt;
        float amountOfDebt; // cannot be smaller than 0
};

#endif