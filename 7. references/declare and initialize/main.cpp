
#include <iostream>
using namespace std;

int main()
{
    int int_data{30};
    double double_data{55};

    // References
    // ! You have to initialize the reference with detailed variable at beginning
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    // reference is just alias for the variable
    cout << "original data: " << int_data << " references data: " << ref_int_data << endl;
    cout << "original data: " << double_data << " references data: " << ref_double_data << endl;
    cout << "original data address: " << &int_data << " references data address: " << &ref_int_data << endl;
    cout << "original data address: " << &double_data << " references data address: " << &ref_double_data << endl;

    int_data = 111;
    double_data = 56;
    cout << "_________________after change original data______________________" << endl;
    cout << "original data: " << int_data << " references data: " << ref_int_data << endl;
    cout << "original data: " << double_data << " references data: " << ref_double_data << endl;

    ref_int_data = 43;
    ref_double_data = 78;
    cout << "_________________after change reference data______________________" << endl;
    cout << "original data: " << int_data << " references data: " << ref_int_data << endl;
    cout << "original data: " << double_data << " references data: " << ref_double_data << endl;

    double other_double = 10;
    ref_double_data = other_double;
    // just change the value, but can't change the reference
    cout << "_________________try to change the double pointer_____________________" << endl;
    cout << "original data: " << double_data << " references data: " << ref_double_data << endl;

    return 0;
}
