#include "Mystring.h"
#include <iostream>
#include <cstring>


Mystring::Mystring(): str{nullptr}{
    str = new char[1];
    str[0] = '\0';
}


Mystring::Mystring(const char *s): str{nullptr}
{
    if(s == nullptr){
        str = new char[1];
        str[0] = '\0';
    }else{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}


Mystring::Mystring(const Mystring &source): str{nullptr}{
    if(source.str == nullptr){
        str = new char[1];
        str[0] = '\0';
    }else{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
    }
}


Mystring::~Mystring(){
    delete[] str;
    str = nullptr;
}


void Mystring::display() const{
    std::cout << get_length() << ": " <<  str << std::endl;
}

int Mystring::get_length() const{
    return std::strlen(str);
}
