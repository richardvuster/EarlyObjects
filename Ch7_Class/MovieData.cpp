#include <iostream>
#include "MovieData.h"
#include <string>
/*
Problem definition:
input: movie data: title, director, release year, and running time in minutes 
output: function that display movie information. should be passed by value

*/
MovieData::MovieData(std::string t, std::string d, int rY, int rT) : title(t), director(d), releaseYear(rY), runningTime(rT) {}

//getter
std::string MovieData::getTitle() const{
    return title;
}
std::string MovieData::getDirector() const{
    return director; 
}
int MovieData::getReleaseYear() const{
    return releaseYear;
}
int MovieData::getRunningTime() const{
    return runningTime;
} 

    
void Display(MovieData s1){

    std::cout << "Movie title: " << s1.getTitle() << "\nMovie Director: " << s1.getDirector() << "\nRelease Year: " << s1.getReleaseYear() << "\nTotal Run-time: "
              << s1.getRunningTime() << " minutes!"<< std::endl; 
}

int main(){
    MovieData m1 {"Foos Gone Wild", "Mr. Lil E", 2020, 210};
    Display(m1);

    std::cout << std::endl;

    MovieData m2 {"Street Songs", "Rick James", 1981, 35};
    Display(m2);
    
    return 0;
}

/*
    void display(const MovieData s) const {}
        - the second const is not allowed since it is a non-member function
    -major error: getting function is inaccessible....
        - I solved this by explicitly putting public keyword in the class definition
        - I thought that everything in a class is definition is public, unless specified that it is private or protected.
*/
