#include <iostream>

int main()
{
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    auto var6 {123u};
    auto var7 {123ul};
    auto var8 {123ull};

    // int 4
    std::cout << sizeof(var1) << std::endl;
    // double 8
    std::cout << sizeof(var2) << std::endl;
    // float 4
    std::cout << sizeof(var3) << std::endl;
    // long double 16
    std::cout << sizeof(var4) << std::endl;
    // char 1
    std::cout << sizeof(var5) << std::endl;
    //  unsigned int 4
    std::cout << sizeof(var6) << std::endl;
    // unsigned long 4
    std::cout << sizeof(var7) << std::endl;
    // long long 8
    std::cout << sizeof(var8) << std::endl;



    return 0;
}
