#include <iostream>
#include <fstream>
#include <iterator>
#include <map>
#include <utility>
#include <string>
/*
Modular program that analyzes a year's worth of rainfall data.
getData function: accepts total rainfall for each of 12 months from the user and store it in a double data type array
four value-returning function that compute totalRainfall, averageRainfall, driestMonth, and wettestMonth. 
eg:
Total rainfall: 23.19 cm
average monthly rainfall: 1.02 cm
the least rain fell in January with 0.24 inches
The most rain fall in April with 4.29
----------------------------------------------------------------------------------------------------------------------
I will be attempting to use a map for this problem
*/
double totalRainFall(std::map<std::string, double> * rf){
    double sum;
    //std::map<std::string, double>::iterator itr;
    for(std::pair<std::string, double> element : *rf){
        sum += element.second;
    }
    return sum;
}

double averageRainFall(std::map<std::string, double> * rff){
    double average; 
    for(std::pair<std::string, double> element : *rff){
        average += element.second;
    }
    return average / rff->size();
}
std::pair<std::string, double> pairs(std::string s, double d) {
    return std::make_pair(s, d);
}
double leastRainFall(std::map<std::string, double> * rfff){
    
    std::map<std::string, double>::iterator itr = rfff->begin();

}

double mostWet(std::map<std::string, double> * rfffff){

}
int main(){
    std::string month;
    std::string fileName = "rainFallStats.dat";
    double rainfall;
    std::ifstream inFile;
    inFile.open(fileName.c_str());
    if(!inFile){
        std::cerr << "WTF file could not open!\n";
    }
    std::map<std::string, double> rainFalls;
    while(inFile >> month >> rainfall){
        rainFalls.insert(std::pair<std::string, double>(month, rainfall));
    }

    double totalFalls = totalRainFall(&rainFalls); 
    std::cout << "Total Rain Fall is: " << totalFalls << " inches.\n";
    double averageFalls = averageRainFall(&rainFalls);
    std::cout << "Average rainfall for the 12 months is: " << averageFalls << " inches.\n";
    /*
    std::map<std::string, double>::iterator itr;
    std::cout << "The map mando is : \n";
    std::cout << "\tKEY\t\t\tELEMENT\n";
    for(itr = rainFalls.begin(); itr != rainFalls.end(); ++itr){
        std::cout << "\t" << itr->first << "\t\t\t" << itr->second << "\n";
    }
    std::cout << std::endl;
    */

    inFile.close();


    return 0;
}