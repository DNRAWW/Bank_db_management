// main.cpp for testing and running the programm

#include "../../includes/human/human.hpp"
#include <iostream>

int main() {
    Human human("Kostya", "Moguchev", "Andrey", MALE, "27/02/2002");

    std::cout   << "Human - " << human.getFirstName() << " " << human.getLastName() 
                << "\nDate of birth - "  << human.getDateOfBirth() << "\nSex - " << human.getSex();

    return 0;
}