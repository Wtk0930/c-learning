
#include <iostream>

// Define a structure
struct Dog{
    public:
        std::string  m_name;
};


class Cat{
    public:
        std::string m_name;
};


struct Point{
    double x;
    double y;
};


void print_point(const Point& p){
    std::cout << p.x << " " << p.y;
}

int main() {
    // Create an instance of the Person structure
    Dog dog;

    // Assign values to the structure members
    dog.m_name = "puppy";


    Cat cat;

    cat.m_name = "Jonny";

    Point p;
    p.x  = 10;
    p.y = 20;

    return 0;
}
