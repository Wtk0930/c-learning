#include <iostream>
using namespace std;


int main(void){
    int a{2};
    int b{3};
    int c{4};
    // returnType 可以省略
    // capture by reference
    auto f1 = [&c]() -> int{
        c ++;
        return c;
    };

    for(int i{};i < 20;i ++){
        f1();
        cout << c << endl;
    }

    // capture all by values
    auto f2 = [=](){
        cout << a + b + c << endl;
    };


    // capture all by references
    auto f3 = [&](){
        a ++;
        b ++;
        c ++;
    };

    f2();f3();
    cout << a << " " << b << " " << c << endl;
}
