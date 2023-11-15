#include <iostream>
using namespace std;


const char* maximum(const std::string a, const std::string b){
    char s1[]{"111"};
    cout << "s1: " << s1 << endl;
    return "111";
}


const int* maximum(){
    int i{4};
    return &i;
}

int main(){
    int a{10};
    int b{20};

    double c{21.0};
    double d{23.0};

    std::string s1{"abc"};
    std::string s2{"efg"};
    std::string s3 = maximum(s1, s2);
    s3 = s3 + "555";

    cout << s3 << endl;
    const char* s4 = maximum(s1, s2);
    cout << s4 << endl;

    const int* i = maximum();
    const int* j = maximum();
    cout << *i << *j <<  endl;
}
