#include <iostream>
#include <concepts>

// syntax1
// template <typename T>
//     requires std::integral<T>
// T add(T a, T b)
// {
//     return a + b;
// }

// syntax2
// template <std::integral T>
// T add(T a, T b)
// {
//     return a + b;
// }

// syntax3
// auto add(std::integral auto a, std::integral auto b)
// {
//     return a + b;
// }

// syntax 4
template <typename T>
T add(T a, T b) requires std::integral<T>
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    double a = 3.14, b = 2.71;
    std::string s1 = "Hello", s2 = "World";

    std::cout << add(x, y) << std::endl;   // Output: 15
    std::cout << add(a, b) << std::endl;   // Output: 5.85
    std::cout << add(s1, s2) << std::endl; // Output: HelloWorld

    return 0;
}
