#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using std::cout;
using std::endl;

// display any vector of integers using range-based for loop
void display(const std::vector<int> &vec) {
    cout << "[ ";
    for (auto const &i: vec) {
        cout << i << " ";
    }
    cout << "]" << endl;
}


void test1(){
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    for(std::vector<int>::iterator i{nums1.begin()};i != nums1.cend();i ++){
        cout << *i << " ";
    }
    cout << endl;

    cout << *(nums1.cend() - 1) << endl;
}


void test2(){
    std::map<int, std::string> studentMap{
        {1, "Tengkai Wang"},
        {2, "Long Chen"},
    };

    for(auto i{studentMap.crbegin()};i != studentMap.crend(); i++){
        cout << i -> first << " " << i -> second << endl;
    }

}


int main(void){
    // test1();
    test2();
    return 0;
}
