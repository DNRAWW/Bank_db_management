# Bank database managment

This is my first proper C++ project. During this project I will learn:

1. Modern C++;
2. Using OOP;
3. CMake;
4. Using a database engine to store data (in this case postgres);
5. Data structures.

# TODO

## Human interface:

- [ ] A first name;
- [ ] A middle name;
- [ ] A last name;
- [ ] Sex;
- [ ] Date of birth;

## Customer interface:

- [ ] Address;
- [ ] Money in the bank;
- [ ] Debt? (true or false);
- [ ] Amount of debt.

## Repository interface:

<!-- In the repository class:
- [ ] Connection or ***map?*** with pointers to objects; -->

- [ ] Method add;
- [ ] Method delete;
- [ ] Method delete by property;
- [ ] Method get all people;
- [ ] Method get one person by id;
- [ ] Method get by property and order (true or false).

## Provider interface:

- [ ] Method for creating a connection to database;
- [ ] Method for closing the connection;
- [ ] Method get repository.

## Bank managment class:

- [ ] A repository;
- [ ] Method add;
- [ ] Method change;
- [ ] Method delete by id;
- [ ] Method delete by properties;
- [ ] Method get all people;
- [ ] Method get one person by id;
- [ ] Method get by properties and order (NULL or DESC/ASC).

## Main loop class:

- [ ] Run method;