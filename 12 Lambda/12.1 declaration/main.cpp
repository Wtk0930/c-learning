#include <iostream>
using namespace std;


int main(void){
    // returnType 可以省略
    auto sum = [](double a, double b) -> int{
        cout << a + b << endl;
        return a + b;
    };

    cout << sum(0.1, 0.3) << endl;
}
