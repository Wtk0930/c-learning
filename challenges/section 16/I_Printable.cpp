#include "I_Printable.h"
#include "iostream"

std::ostream& operator<<(std::ostream& os, I_Printable& printer){
    printer.print(os);
    return os;
}
