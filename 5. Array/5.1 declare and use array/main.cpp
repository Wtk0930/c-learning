#include <iostream>
using namespace std;

int main(void)
{
    // 1 2 3 0 0 0 0 will be zero
    // int scores[10]{1, 2, 3};

    // will be garbage data and
    int scores[10];
    scores[0] = 1;


    // loop the array
    for (auto score : scores)
    {
        cout << score << endl;
    }

    for (size_t i{0}; i < 10; i++)
        cout << scores[i] << endl;

    // const array
    const int arr[10] = {1, 2,3};
    // arr[3] = 10;

    return 0;
}
