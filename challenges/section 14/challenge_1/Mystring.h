#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
using namespace std;

class Mystring {
    friend ostream& operator<<(ostream& os, const Mystring& rhs);
	friend istream& operator>>(istream& in, Mystring& rhs);
private:
	char* str;                                     // Pointer to a char[] that holds a C-style string
public:
	Mystring();                                    // No-args constructor
	Mystring(const char* s);                       // Overloaded constructor
	Mystring(const Mystring& source);              // Copy constructor
	Mystring(Mystring&& source);                   // Move constructor
	~Mystring();                                   // Destructor


    Mystring& operator=(const Mystring& rhs);
    Mystring& operator=(Mystring&& rhs);
    Mystring operator-();                          // unary minus
    bool operator==(const Mystring& str) const;          // equal
    bool operator!=(const Mystring& str) const;          // not equal
    bool operator<(const Mystring& str) const;
    bool operator>(const Mystring& str) const;
    Mystring operator+(const Mystring& str) const;
    void operator+=(const Mystring& str);
    Mystring operator*(const int times) const;
    void operator*=(const int times);
};

#endif // _MYSTRING_H_
