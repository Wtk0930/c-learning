#include <iostream>

using namespace std;

template <typename T>
const T &maximum(const T &a, const T &b);

int main()
{
    double a{23.5};
    double b{51.2};

    int c{20};
    int d{24};

    cout << "Out -&a" << &a << endl;
    // auto result = maximum<double>(a, c);

    // all the same
    auto result = maximum(a, b);
    cout << "Out -&a" << &a << endl;

    return 0;
}


// you can't have both the reference template as well as value template
template <typename T>
const T &maximum(const T &a, const T &b)
{
    cout << "Inner -&a" << &a << endl;
    return a > b ? a : b;
}
