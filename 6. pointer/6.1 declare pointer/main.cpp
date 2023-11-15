#include <iostream>
using namespace std;

int main()
{
    // declare and initialize pointer
    int *p_number;
    // true
    cout << (p_number == nullptr) << endl;
    int *p_fractional_number{};
    // true
    cout << (p_fractional_number == nullptr) << endl;
    int *p_number1{nullptr};

    int *p_number2{}, other_int_var{};
    int *p_number3{}, other_int_var_1{};
    // pointer       int
    cout << sizeof(p_number2) << " " << sizeof(other_int_var) << endl;
    // pointer       int
    cout << sizeof(p_number3) << " " << sizeof(other_int_var_1) << endl;

    int int_var = 43;
    int *p_int{&int_var};

    cout << p_int << " " << *p_int << endl;

    return 0;
}
