#include <iostream>
#include <sstream> 
#include "MovieData.h"
/*
Problem definition:

input: movie description: title, director, release year, running time, production cost, first-year revenues
ouput: display movie description and improve display function by passing as constant references instead of pass by value
*/

class MovieProfit : public MovieData{
public:
    MovieProfit(std::string t, std::string d, int rY, int rT, double p, std::string f) : MovieData(t, d, rY, rT), ProductionCost(p) , firstYear_Revenue(f) {}

    //getters to the two members I created for this class. 
    void calculateRevenue(){
        //string to int - stoi or ostringstream
        double revenue;
        std::stringstream(getRevenue())>>revenue; 
        if(revenue < getProductionCost()){
            setRevenue("Negative Profit");
        }else{
            setRevenue("Positive Profit");
        }
    }

    double getProductionCost() const {
        return ProductionCost;
    }
    std::string getRevenue() const {
        return firstYear_Revenue;
    }
    void setRevenue(std::string s){
        firstYear_Revenue = s;
    }
private:
    std::string title;
    std::string director;
    int releaseYear;
    int runningTime;
    double ProductionCost;
    std::string firstYear_Revenue;

}; 

void printStuff(const MovieProfit &s1){
     std::cout << "Movie title: " << s1.getTitle() << "\nMovie Director: " << s1.getDirector() << "\nRelease Year: " << s1.getReleaseYear() << "\nTotal Run-time: "
              << s1.getRunningTime() << " minutes!"<< std::endl; 
     std::cout << "Production cost: $" << s1.getProductionCost() << "\nRevenue status: " << s1.getRevenue() << std::endl;
}

/*
Notes:
    Since I was improving  the movieData function, I created a MovieData.h. In this program, I will attempt to incoporate inheritance 
    Questions: Can the derived class access the base class privat members? 

*/

int main(){
    MovieProfit m1 {"No Smoking Broken Windows", "Tupac X Biggy T", 2020, 260, 10000, "50000"};
    //MovieData m1 {"Foos Gone Wild", "Mr. Lil E", 2020, 210};
    m1.calculateRevenue();
    printStuff(m1);

    return 0;
}