#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H

#include<iostream>


class I_Printable{
    friend std::ostream& operator<<(std::ostream& os, I_Printable& printer);
public:
    virtual void print(std::ostream& os) = 0;
};
#endif
