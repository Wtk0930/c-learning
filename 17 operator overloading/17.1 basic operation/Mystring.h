#ifndef MY_STRING_H
#define MY_STRING_H

class Mystring {
private:
    char *str; // C-style string

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;
};
#endif
