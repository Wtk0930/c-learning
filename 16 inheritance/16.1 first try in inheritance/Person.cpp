#include "Person.h"

Person::~Person(){
    
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Person[" << person.firstName << " " << person.lastName << "]";
    return out;
}
