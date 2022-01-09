#ifndef __HUMAN_H_INCLUDED__
#define __HUMAN_H_INCLUDED__

#include <string>

enum Sexes: char {
    MALE = 'M',
    FEMALE = 'F'
};

class Human {
    public:
        Human(std::string firstName, std::string lastName, std::string middleName, Sexes sex, std::string dateOfBirth);
        
        // Getters
        
        std::string getFirstName();
        std::string getLastName();
        std::string getMiddleName();
        Sexes getSex();
        std::string getDateOfBirth();
        std::string getFullName();
        // Setters

        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setMiddleName(std::string middleName);
        
    protected:
        std::string firstName;
        std::string middleName;
        std::string lastName;

        // Can't be changed
        Sexes sex;
        std::string dateOfBirth;
};


#endif