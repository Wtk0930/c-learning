#include <iostream>
using namespace std;

class MyClass {
public:
    static int myStaticVar;  // Private static member variable

private:
    void setMyStaticVar(int val) {
        myStaticVar = val;  // Can access private static member variable
    }

    int getMyStaticVar();
};


// we can define the private static member variable outside the class, but we can't define the private normal variable outside the class
int MyClass::myStaticVar = 0;  // Define and initialize the private static member variable
int MyClass::getMyStaticVar(){
    return 1;
}

int main(void){
    cout << MyClass::setMyStaticVar;
}
