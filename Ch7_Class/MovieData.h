#ifndef MOVIE_DATA_H
#define MOVIE_DATA_H

#include <string> 
class MovieData{
public:
    MovieData(std::string , std::string , int , int );

    //getter
    std::string getTitle() const;
    std::string getDirector() const;
    int getReleaseYear() const; 
    int getRunningTime() const; 
private:
    std::string title;
    std::string director;
    int releaseYear;
    int runningTime;
};

#endif
/*
To learn: pragma once vs ifndef
*/