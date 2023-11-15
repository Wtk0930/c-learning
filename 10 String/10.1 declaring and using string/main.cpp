// Preprocessor directive to include the iostream header file
#include <iostream>
#include <string>

// Main function
int main() {
    std::string full_name; // empty string
    std::string planet {"Earth; where the sky is blue"};
    std::string prefered_planet {planet}; // initialize planet using another string
    std::string message {planet, 5}; // initialize string with part of string literal
    std::string wield_message(4, 'e');
    std::string greeting{"Hello World"};
    std::string saying_hello{greeting, 6, 5}; // starting from 6 taking 5 characters

    // Return statement to indicate successful program completion
    return 0;
}
