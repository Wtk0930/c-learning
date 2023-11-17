#include <iostream>
#include "cylinder.h"


int main(void){
    Cylinder* cylinder1{new Cylinder(12, 13)};

    std::cout << cylinder1-> volumn() << std:: endl;
    std::cout << (*cylinder1).volumn() << std:: endl;
    delete cylinder1;
    cylinder1 = nullptr;
}
