// Preprocessor directive
#include <iostream>
using namespace std;

// Main function
int main()
{
    // Code goes here
    int *p_number{};

    if (!p_number)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    // Return statement
    return 0;
}
