#include <iostream>
using namespace std;

int main(void)
{
    int arr[10]{1, 2, 3};

    cout << arr[-4] << endl;
    cout << arr[17] << endl;
    arr[12990] = 20;
    cout << arr[11] << endl;
    return 0;
}
