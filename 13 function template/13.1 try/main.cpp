#include <iostream>
using namespace std;

template <typename T, typename G> G maximum(T& a, G& b);

int main(){
    int a{10};
    int b{20};

    double c{21.0};
    double d{23.0};

    std::string s1{"abc"};
    std::string s2{"efg"};

    cout << maximum(a, b) << endl;
    cout << maximum(b, c) << endl;
    cout << maximum(s1, s2) << endl;
}

template <typename T, typename G> G maximum(T& a, G& b){
    return a > b ? a : b;
}
