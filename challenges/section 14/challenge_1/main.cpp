/*
 * Section 14 Challenge 1 (Overload the operators using member functions)
 * ======================================================================
 * Overload the following operators in the provided Mystring class.
 *
 * To gain experience overloading operators, you should do this challenge twice.
 * First, overload the operators using member functions and then in another project overload the same operators
 * again using non-member functions.
 *
 * Please do it once using member methods and then again using non-member functions.
 *
 * Here is a list of some of the operators that you can overload for this class:
 *
 * -  - Unary minus. Returns the lowercase version of the object's string.
 *      -s1
 * == - Returns true if the two strings are equal.
 *      (s1 == s2)
 * != - Returns true if the two strings are not equal.
 *      (s1 != s2)
 * <  -	Returns true if the lhs string is lexically less than the rhs string.
 *      (s1 < s2)
 * >  -	Returns true if the lhs string is lexically greater than the rhs string.
 *      (s1 > s2)
 * +  - Concatenation. Returns an object that concatenates the lhs and rhs.
 *      s1 + s2
 * += - Concatenate the rhs string to the lhs string and store the result in lhs object.
 *      s1 += s2; equivalent to s1 = s1 + s2;
 * *  - Repeat. Results in a string that is copied n times.
 *      s2 * 3;  ex). s2 = "abc";
 *                    s1 = s2 * 3;
 *                    s1 will result in "abcabcabc"
 * *= - Repeat the string on the lhs n times and store the result back in the lhs object.
 *      s1 = "abc";
 *      s1 *= 4;  s1 = s1 will result in "abcabcabcabc"
 *
 * If you wish to overload the ++ and -- operators remember that they have pre and post versions.
 */
#include "Mystring.h"
#include <iostream>

int main() {
    // Test no-args constructor
    Mystring empty;
    std::cout << "Empty string: '" << empty << "'" << std::endl;

    // Test overloaded constructor
    Mystring hello("Hello");
    std::cout << "Overloaded string: '" << hello << "'" << std::endl;

    // Test copy constructor
    Mystring copyHello(hello);
    std::cout << "Copy of hello: '" << copyHello << "'" << std::endl;

    // Test move constructor
    // Mystring movedHello(std::move(hello));
    // std::cout << "Moved hello (should be empty now): '" << hello << "'" << std::endl;
    // std::cout << "Moved hello (should have value of original hello): '" << movedHello << "'" << std::endl;

    // Test copy assignment
    Mystring assign;
    assign = copyHello;
    std::cout << "Assigned string (should be same as copyHello): '" << assign << "'" << std::endl;

    // Test move assignment
    Mystring moveAssign;
    moveAssign = std::move(copyHello);
    std::cout << "Move assigned string (should be same as copyHello): '" << moveAssign << "'" << std::endl;
    // std::cout << "CopyHello after moving (should be empty): '" << copyHello << "'" << std::endl;

    // Test self-assignment protection
    assign = assign;
    std::cout << "Self-assigned string (should be unchanged): '" << assign << "'" << std::endl;

    // Test unary minus operator (make lowercase)
    Mystring uppercase("UPPERCASE");
    Mystring lowercase = -uppercase;
    std::cout << "Lowercase conversion: '" << lowercase << "'" << std::endl;

    // Test equality and inequality operators
    Mystring same1("same");
    Mystring same2("same");
    Mystring different("different");
    std::cout << "same1 equals same2? " << (same1 == same2 ? "Yes" : "No") << std::endl;
    std::cout << "same1 not equals different? " << (same1 != different ? "Yes" : "No") << std::endl;

    // Test concatenation
    Mystring concatResult = same1 + " " + different;
    std::cout << "Concatenation result: '" << concatResult << "'" << std::endl;

    // Test concatenation-assignment
    Mystring name("Name");
    name += " Surname";
    std::cout << "Concatenation-assignment result: '" << name << "'" << std::endl;

    // Test multiplication (string repetition)
    Mystring repeated = name * 2;
    std::cout << "Repeated string (should appear twice): '" << repeated << "'" << std::endl;

    // Test multiplication-assignment
    Mystring multiAssign("Repeat");
    multiAssign *= 3;
    std::cout << "Multiplication-assignment result (should appear thrice): '" << multiAssign << "'" << std::endl;


    std::cout << "program end" << std::endl;
    return 0;
}
