#ifndef __CUSTOMER_H_INCLUDED__
#define __CUSTOMER_H_INCLUDED__

#include "../human/human.hpp"

class Customer : public Human {
    public:
        Customer(Sexes sex, std::string dateOfBirth);

        // Getters
        
        std::string getAddress();
        float getMoney();
        bool isInDebt();
        float getDebt();

        // Setters

        void setAddress(std::string address);
        void setDebtStatus(bool status);

        void setAmountOfMoney(float money);
        void changeAmountOfMoney(float changeInMoney);
        
        void setAmountOfDebt(float debt);
        void changeAmountOfDebt(float changeInDebt);

        void setId(uint64_t id); // for mock data purposes

    private:
        std::string address;
        float amountOfMoney; // cannot be smaller than 0
        bool inDebt;
        float amountOfDebt; // cannot be smaller than 0
};

#endif