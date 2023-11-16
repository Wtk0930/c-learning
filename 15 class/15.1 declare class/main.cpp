
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
};

void changeCylinder(Cylinder cyl)
{
    cyl.base_radius = 5.0;
    cyl.height = 10.0;
}

int main()
{
    Cylinder cylinder1;
    cylinder1.base_radius = 2.0;
    cylinder1.height = 3.0;

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
