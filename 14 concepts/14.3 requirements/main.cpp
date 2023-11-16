#include <iostream>
#include <concepts>

// use && or || to combine different requirements
// Syntax1
template <typename T>
concept myconcept =  requires(T a, T b) {
    a++;
    ++a;
    a = a + 1;
    a += 1;
    a *b;


    requires std::is_integral_v<T>;
    requires sizeof(T) < 4;
};

template <typename T>
    requires myconcept<T>
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
    auto s3 = add('a', 'b');
    return 0;
}
