#include <iostream>
using namespace std;

int main(void)
{
    // 1. initialization
    char message[5]{'H', 'e', 'l', 'l', 'o'};

    cout << message << endl;

    // 2. add null zero to the end automatically
    char message1[6]{'H', 'e', 'l', 'l', 'o'};

    cout << message1 << endl;
    for (auto c : message1)
    {
        cout << c << endl;
    }


    // 3.  null-terminated string C String
    char message2[] {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << message2 << endl;


    // 4.  String literal C String
    char message3[] {"Hello"};
    cout << message2 << sizeof(message3) << endl;

    return 0;
}
