#include <iostream>
using namespace std;

int main()
{
    int b = 0;
    // do not need the variable to be const
    const int &a = b;

    // read the grammar from two parts, one in front of * one after *
    const int *p = &b;
    (*p)++;
    cout << *p << endl;
}
