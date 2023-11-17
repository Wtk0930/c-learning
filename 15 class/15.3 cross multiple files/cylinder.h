#ifndef CYLINDER
#define CYLINDER

class Cylinder
{
public:

    double base_radius{};
    double height{};

    double volumn();

    // if you only define constructor with parameters, the compiler won't generate
    // default constructor for you
    Cylinder() = default;

    Cylinder(double rad_param, double height_param);
};

#endif
