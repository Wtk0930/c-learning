#include "Movies.h"

void Movies::addMovie(std::string name, std::string rate, int watched){
        (*movies).push_back(Movie{name, rate, watched});
}

void Movies::incrementWatched(std::string name){
    for(auto& movie: *movies){
        if(movie.name == "name"){
            movie.watched ++;
            return;
        }
    }
}

void Movies::displayAllMovies() const{
    for(auto& movie: *movies){
        std::cout << movie.toString() << std::endl;
    }
}


Movies::~Movies(){
    delete movies;
    movies = nullptr;
}
