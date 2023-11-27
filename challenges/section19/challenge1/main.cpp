/*
 * Section 20 Challenge 1 - Deque Challenge
 * ========================================
 * A Palindrome is a string that reads the same backwards or fowards.
 * Simple examples are:
 * madam
 * bob
 * toot
 * radar
 *
 * An entire phrase can be a palindrome, for example:
 * A Toyota's a toyota
 * A Santa at NASA
 * A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!
 *
 * For the purposes of this assignment we will only consider alpha characters and omit all other characters.
 * We will also not be considering case.
 * So,
 * A Santa at Nasa, will be processed as:
 * ASANTAATNASA
 *
 * A common method to solve this problem is to compare the string to its reverse and
 * if they are equal then it must be a palindrome. But we will use a deque.
 *
 * I am providing the main driver for you which will automatically run several test cases.
 * Your challenge is to write the following function:
 *
 * bool is_palindrome(const std::string &s)
 *
 * This function will expect a string and it must determine if that string is a palindrome
 * and return true if it is, or false if it is not.
 *
 * So,
 *
 * is_palindrome("A Santa at Nasa"); will return true
 * is_palindrome("Hello"); will return false
 *
 * Please use a deque to solve the problem.
 *
 * If you need a hint, please ask in the Q/A.
 * Good luck and have fun!
 */
#include <cctype>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;


string& process_string(string& str){
    transform(str.begin(), str.end(), str.begin(), [](auto x){
        return std::toupper(x);
    });
    auto it = std::remove_if(str.begin(), str.end(), [](unsigned char x){
        return !std::isalpha(x);
    });
    str.erase(it, str.end()); // Erase the non-alphabetic characters
    return str;
}


bool is_palindrome(string&& str){
    process_string(str);
    deque<char> q1;
    deque<char> q2;
    std::copy(str.begin(), str.end(), std::front_inserter(q1));
    std::copy(str.begin(), str.end(), std::back_inserter(q2));
    return q1 == q2;
}



int main(void){
    cout << is_palindrome("abbac") << endl;
}
