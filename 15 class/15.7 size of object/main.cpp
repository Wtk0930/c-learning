#include <iostream>

// Define your structure
class MyStructure {
    public:
        int* myInt;
        // the sum will be the (member number) * (the largest size of data type) = 8 * 3= 24
        // memory alignment
        // double myDouble;
        char* myChar;
        int * car;





        MyStructure() = default;



};

int main() {
    // Create an instance of the structure
    MyStructure myObject;

    // Assign values to the structure members
    // myObject.myInt = 10;
    // myObject.myDouble = 3.14;
    // myObject.myChar = 'A';

    std::cout << sizeof(MyStructure) << std::endl;
    // std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(char *) << std::endl;






    return 0;
}
