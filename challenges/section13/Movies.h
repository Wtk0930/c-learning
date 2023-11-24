#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <vector>

class Movies{
    std::vector<Movie> *movies;


public:
    void addMovie(std::string name, std::string rate, int watched);
    Movies(): movies{new std::vector<Movie>{}}{}
    ~Movies();
    void incrementWatched(std::string name);
    void displayAllMovies() const;
};
#endif
