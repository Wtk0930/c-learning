#include <iostream>
using namespace std;

int main(void)
{
    // allocate it with a location in heap instead of stack
    // you need to return the space after usage
    int *temp{};
    {
        int a = 10;
        int *p_number{new int{20}};
        temp = p_number;
        cout << *p_number << endl;
        *p_number = 77;
        cout << *p_number << endl;

        // release the memory and point to the nullpointer
        delete p_number;
        p_number = nullptr;
    }
    cout << *temp;
}
