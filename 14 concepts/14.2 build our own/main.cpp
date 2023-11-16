#include <iostream>
#include <concepts>

// use && or || to combine different requirements
// Syntax1
template <typename T>
concept myconcept = std::is_integral_v<T> && requires(T a, T b) {
    a++;
    ++a;
    a = a + 1;
    a += 1;
    a *b;
};

template <typename T>
    requires myconcept<T> && std::integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    double a = 3.14, b = 2.71;
    std::string s1 = "Hello", s2 = "World";

    // change here
    auto s3 = add(x, y);
    return 0;
}
