#ifndef MOVIE_H
#define MOVIE_H

#include<iostream>

class Movie{
    friend class Movies;

    std::string name;
    std::string rate;
    int watched;

public:
    Movie(std::string name, std::string rate, int watched): name{name}, rate{rate}, watched{watched}{
    }

    Movie(const Movie&& source): Movie{source.name, source.rate, source.watched}{
    }

    Movie(const Movie& source): Movie{source.name, source.rate, source.watched}{
    }


    std::string toString() const;
};
#endif
