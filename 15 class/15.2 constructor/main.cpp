
#include <iostream>

using namespace std;

const double PI{3.1415926};



class Cylinder
{
public:

    double base_radius{};
    double height{};

    double volumn()
    {
        return PI * base_radius * height;
    }

    // if you only define constructor with parameters, the compiler won't generate
    // default constructor for you
    Cylinder() = default;

    Cylinder(double rad_param, double height_param){
        base_radius = rad_param;
        height = height_param;
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
    Cylinder cylinder2(12, 14);

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
