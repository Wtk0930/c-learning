#include <array>
#include <vector>
#include <deque>
#include <iostream>
using namespace std;


ostream& operator<<(ostream& os, array<int, 5>& a){
    for(auto i: a){
        os << i << " ";
    }
    os << endl;
    return os;
}

template <typename T>
void log(T source){
    cout << source << endl;
}

int main(void){
    // initilization
    array<int, 5>a{1, 2, 3, 4, 5};
    // assignment
    a = {2, 4, 6, 8, 10};
    log(a);

    // get the size of array
    log(a.size());

    // index
    log(a.at(1));
    log(a[1]);

    // front and back
    log(a.front());
    log(a.back());


    // -----------------------------vector-------------------------------//
    log("---------------------------vector----------------------------");
    vector<int> v{1, 2, 3};
    log(v.capacity());
    v.push_back(4);

    log("---------------------------deque----------------------------");
    deque<int> d(100, 10);
    cout << d.size();

}
