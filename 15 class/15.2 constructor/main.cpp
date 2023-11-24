
#include <iostream>

using namespace std;

const double PI{3.1415926};



class Cylinder
{
public:

    double base_radius{};
    double height{};
    char * color{};

    double volumn()
    {
        return PI * base_radius * height;
    }

    // if you only define constructor with parameters, the compiler won't generate
    // default constructor for you
    // Cylinder() = default;

    // delegating constructor: use another existed constructor to initialize the member variables
    Cylinder(): Cylinder{0, 0, 'N'}{}

    // default parameter constructor
    // Cylinder(double rad_param=0, double height_param=0): height{height_param}, base_radius{rad_param} {
    //     base_radius = rad_param;
    //     height = height_param;
    // }

    Cylinder(double rad_param, double height_param=0, char c='r'): height{height_param}, base_radius{rad_param}, color{new char{c}} {
    }

    // 1. deep copy construtor
    // Cylinder(const Cylinder& source):base_radius{source.base_radius}, height{source.height}, color{new char{*(source.color)}}
    // {}

    // 2. deep copy construtor
    Cylinder(const Cylinder& source): Cylinder{source.base_radius, source.height, *(source.color)}
    {}



    ~Cylinder(){
        delete color;
        color = nullptr;
    }


};

void changeCylinder(Cylinder cyl)
{
    cyl.base_radius = 5.0;
    cyl.height = 10.0;
}

int main()
{
    // the two syntax are the same
    Cylinder cylinder1;
    Cylinder cylinder2(12, 14, 'r');

    // pass the value will never influence the object itself
    cout << "Before change: " << endl;
    cout << "Base radius: " << cylinder1.base_radius << endl;
    cout << "Height: " << cylinder1.height << endl;

    changeCylinder(cylinder1);

    cout << "After change: " << endl;
    cout << "Base radius: " << cylinder1.base_radius << endl;
    cout << "Height: " << cylinder1.height << endl;

    return 0;
}
