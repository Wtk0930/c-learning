#include <iostream>
using namespace std;

int main()
{
    for (size_t i{0};; i++)
    {
        try
        {
            // int *a{new (nothrow) int[100000]{1}};
            int *a{new int[100000000]};
            cout << "success" << endl;
        }
        catch (exception &ex)
        {
            cout << ex.what() << endl;
        }
    }
    return 0;
}
