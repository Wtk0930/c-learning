#include "Mystring.h"
#include<cstring>

// no-args constructor
Mystring::Mystring(): str{nullptr}{
    str = new char[1];
    str[0] = '\0';
}

// overloading constructor
Mystring::Mystring(const char* s): str{nullptr}{
    if(s == nullptr){
        str = new char[1];
        str[0] = '\0';
    }
    str = new char[std::strlen(s) + 1];
    // for(size_t i{};i < std::strlen(s);i ++){
    //     str[i] = s[i];
    // }
    std::strcpy(str, s);
}

// copy constructor
Mystring::Mystring(const Mystring& source){
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// move constructor
Mystring::Mystring(Mystring&& source): str(source.str){
    source.str = nullptr;
}


// destructor
Mystring::~Mystring(){
    if(str == nullptr) {
        std::cout << "null str destroy" << endl;
    }else{
        delete[] this -> str;
        this -> str = nullptr;
    }
}

// copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {
    if (this == &rhs) return *this; // Handle self-assignment
    delete[] str;
    size_t length = std::strlen(rhs.str);
    str = new char[length + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring& Mystring::operator=(Mystring&& rhs) {
    if (this == &rhs) return *this; // Handle self-assignment
    delete[] str; // Deallocate existing string
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}



Mystring Mystring::operator-(){
    if(str == nullptr || *str == '\0'){
        return *(this);
    }
    Mystring temp;
    size_t length = std::strlen(str);
    temp.str = new char[length + 1];
    for(size_t i{};i < length;i ++){
        temp.str[i] = std::tolower(this->str[i]);
    }
    temp.str[length] = '\0';
    return temp;
}


bool Mystring::operator==(const Mystring &obj) const{
    if(this == &obj) return true;
    if(std::strlen(this -> str) != std::strlen(obj.str)) return false;

    // for(size_t i{};i < std::strlen(obj.str);i ++){
    //     if(this->str[i] != obj.str[i]) return false;
    // }
    // return true;

    return std::strcmp(this->str, obj.str) == 0;
}


// not equal
bool Mystring::operator!=(const Mystring &obj) const{
    return !(*this == obj);
}


bool Mystring::operator<(const Mystring &obj) const{
    return std::strcmp(this->str, obj.str) < 0;
}


bool Mystring::operator>(const Mystring &obj) const{
    return std::strcmp(this->str, obj.str) > 0;
}


Mystring Mystring::operator+(const Mystring &obj) const{
    Mystring temp;
    temp.str = new char[std::strlen(this -> str) + std::strlen(obj.str) + 1];
    char* tempStr = std::strcat(this -> str, obj.str);

    // for(size_t i{};i < std::strlen(this -> str) + std::strlen(obj.str);i ++){
    //     temp.str[i] = tempStr[i];
    // }
    std::strcpy(temp.str, this->str);
    std::strcat(temp.str, obj.str);
    return temp;
}


void Mystring::operator+=(const Mystring &obj){
    char * newStr{new char[std::strlen(str) + std::strlen(obj.str) + 1]};
    std::strcpy(newStr, str);
    std::strcat(newStr, obj.str);
    delete[] str;
    str = newStr;
}

Mystring Mystring::operator*(const int times) const{
    Mystring temp;
    temp.str = new char[std::strlen(this -> str) * times + 1]{};
    // temp.str[0] = '\0';
    for(size_t i{};i < times;i ++){
        std::strcat(temp.str, str);
    }
    return temp;
}
void Mystring::operator*=(const int times){
    char* newStr = new char[std::strlen(this -> str) * times + 1]{};
    // newStr[0] = '\0';

    for(size_t i{};i < times;i ++){
        std::strcat(newStr, this -> str);
    }

    delete[] this -> str;
    this -> str = newStr;
}


ostream& operator<<(ostream& os, const Mystring& rhs) {
	return os << rhs.str;
}
