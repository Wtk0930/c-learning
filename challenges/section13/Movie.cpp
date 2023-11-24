#include "Movie.h"

std::string Movie::toString() const{
        return "[name: " + name + "] " +  "[rate: " + rate + "] " + "[watched: " + std::to_string(watched) + "] ";
}
