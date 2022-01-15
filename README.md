# Bank database managment

This is my first proper C++ project. During this project I will learn:

1. Modern C++;
2. Using OOP;
3. CMake;
4. Using a database engine to store data (in this case postgres);
5. Data structures;
6. Unit testing.

# TODO

## Human interface:

- [x] A first name;
- [x] A middle name;
- [x] A last name;
- [x] Sex;
- [x] Date of birth.

## Customer interface:

- [x] Address;
- [x] Money in the bank;
- [x] Debt? (true or false);
- [x] Amount of debt.

## Repository interface:

- [x] Method add;
- [x] Method delete;
- [ ] Method delete by property;
- [x] Method get all people;
- [x] Method get one person by id;
- [ ] Method get by property and order (true or false).

## Provider interface:

- [x] Method for creating a connection to database;
- [x] Method for closing the connection;
- [x] Method get repository.

## Bank managment class:

- [x] A provider;
- [x] A repository;
- [x] Method add;
- [ ] Method change;
- [x] Method delete by id;
- [ ] Method delete by properties;
- [x] Method get all people;
- [x] Method get one person by id;
- [ ] Method get by properties and order (NULL or DESC/ASC).

## Main loop class:

- [ ] Run method.