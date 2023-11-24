#ifndef PERSON_H
#define PERSON_H

#include<iostream>

class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

    // member variables
    std::string firstName{"Mysterious"};
    std::string lastName{"Person"};

    // member methods
public:
    Person() = default;
    Person(const std::string& firstName, const std::string& lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    }
    ~Person();

    // getters
    std::string getFirstName() const {
        return this->firstName;
    }
    std::string getLastName() const {
        return this->lastName;
    }

    // setters
    void setFirstName(const std::string& firstName) {
        this->firstName = firstName;
    }
    void setLastName(const std::string& lastName) {
        this->lastName = lastName;
    }
};


#endif
