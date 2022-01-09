#include "../../includes/human/human.hpp"
#include <iostream>

Human::Human(std::string firstName, std::string lastName, std::string middleName, Sexes sex, std::string dateOfBirth) {
    setFirstName(firstName);
    setLastName(lastName);
    setMiddleName(middleName);

    Human::sex = sex;
    Human::dateOfBirth = dateOfBirth;
}

std::string Human::getFirstName() {
    return firstName;
}

std::string Human::getLastName() {
    return lastName;
}

std::string Human::getMiddleName() {
    return middleName;
}

std::string Human::getFullName() {
    std::string fullName = "";

    fullName += firstName;
    fullName += " ";

    fullName += middleName;
    fullName += " ";

    fullName += lastName;

    return fullName;
}

Sexes Human::getSex() {
    return sex;
}

std::string Human::getDateOfBirth() {
    return dateOfBirth;
}

void Human::setFirstName(std::string firstName) {
    Human::firstName = firstName;
}

void Human::setLastName(std::string lastName) {
    Human::lastName = lastName;
}

void Human::setMiddleName(std::string middleName) {
    Human::middleName = middleName;
}