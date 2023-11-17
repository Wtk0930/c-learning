#include "cylinder.h"
#include "constants.h"


double Cylinder::volumn(){
        return PI * base_radius * height;
}

Cylinder::Cylinder(double rad_param, double height_param){
        base_radius = rad_param;
        height = height_param;
}
