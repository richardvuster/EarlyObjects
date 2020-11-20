#include <iostream>
/*
Design a Population class that stores a current population, annual number of births, and annual number of deaths for some geographic area.
 The class should allow these three values to be set in either of two ways: 
 by passing arguments to a three-parameter constructor when a new Population object is created or 
 by calling the setPopulation, setBirths, and setDeaths class member functions. In either case, 
 if a population figure less than 2 is passed to the class, use a default value of 2. 
 If a birth or death figure less than 0 is passed in, use a default value of 0. 
 The class should also have getBirthRate and getDeathRate functions that compute and return the birth and death rates. 
Write a short program that uses the Population class and illustrates its capabilities.
*/
class Population{
public:    
    Population() {
        population = 0;
        births = 0;
        deaths = 0;
    }
    Population(int p = 100, int b = 0, int d = 0) : population(p), births(b), deaths(d) {}

    //setter
    void setPopulation(int p){
        if(p < 2){
            population = 2;
        }
        population = p;
    }
    void setBirths(int b){
        if(b < 0){
            births = 0;
        }
        births = b;
    }
    void setDeaths(int d){
        if(d < 0){
            deaths = 0;
        }
        deaths = d;
    }

    //getter
    int getPopulation() const {
        return population;
    }
    int getBirths() const {
        return births;
    }
    int getDeaths() const {
        return deaths;
    }
    //functionality
    void calculateBirthRate(){
        birthRate = this->births / static_cast<double>(this->population);
    }
    void calculateDeathRate(){
        deathRate = static_cast<double>(this->deaths) / this->population;
    }

    //cant use the operator <<, if i have to call population.calculateBirthRate() and .calculateDeathRate() before I use this.
    friend std::ostream & operator <<(std::ostream &os, const Population & p){
        os << "Population: " << p.getPopulation() << "\nAnnual Births: " << p.getBirths() << "\nAnnual Deaths: " << p.getDeaths() 
           << "\nBirth Rate: " << p.birthRate << "\nDeath Rate: " << p.deathRate << "\n";
        
        return os;
    }


private:
    int population;
    int births;
    int deaths;
    double birthRate;
    double deathRate;
};


int main(){
    
    Population s1 = 0;
    s1.setPopulation(100000);
    s1.setBirths(5000);
    s1.setDeaths(2000);
    s1.calculateBirthRate();
    s1.calculateDeathRate();
    std::cout << s1 << std::endl;

    Population s3 {200000, 10000, 5000};
    s3.calculateBirthRate();
    s3.calculateDeathRate();
    std::cout << s3 << std::endl;


    return 0;
}

/*
Errors: When I initialized the Population class with the default constructor: Population s1;
            - I was getting the error "class `Population` has one or more default constructor"
            - I tried setting s1 = null, but that did nothing.
            - the program was able to run by setting it equal to 0. why? 
*/