#include <iostream>
using namespace std;

int main(void)
{
    // you can't modify the string
    const char *message{"Hello World"};

    cout << *message << endl;
    return 0;
}
