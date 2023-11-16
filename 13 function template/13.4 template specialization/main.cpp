#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maximum(T a, T b);

template <>
const char *maximum(const char *a, const char *b);

int main()
{
    double a{23.5};
    double b{51.2};

    int c{20};
    int d{24};

    const char* s1{"abcd"};
    const char* s2{"efgh"};


    cout << "Out -&a" << &a << endl;
    // auto result = maximum<double>(a, c);

    // all the same
    auto result = maximum(a, b);
    cout << "Out -&a" << &a << endl;

    cout << maximum(s1, s2) << endl;

    return 0;
}

// you can't have both the reference template as well as value template
template <typename T>
T maximum(const T a, const T b)
{
    cout << "Inner -&a" << &a << endl;
    return a > b ? a : b;
}

template <>
const char *maximum(const char *a, const char *b){
    return strcmp(a, b) > 0 ? a : b;
}
