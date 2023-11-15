
#include <iostream>
using namespace std;

double weight {};
double add(double a, double b);

struct Point{
    double x;
    double y;
};





int main() {
    cout << add(5, 6) << endl;
    Point p = Point();
    return 0;
}


// you can only definite the function only once
double add(double a, double b){
    return a + b;
}
