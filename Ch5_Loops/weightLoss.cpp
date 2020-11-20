#include <iostream>


int main(int argc, char * argv[]) {

    if(argc < 2){
        std::cerr << "Enter in a mf input bro.\n";
        exit(1);
    }

    double starting_weight = atof(argv[1]);
    double temp = starting_weight;
    int months = 0;
    std::cout << "Month\t\t   Starting Weight  \t\t\tLoss Weight\n";  
    std::cout <<"-----------------------------------------------------------------\n";
    while(months < 6){
        ++months;
        temp -= 4;
        std::cout << "Month " << months << "\t\t\t" << starting_weight << " lb\t\t\t " << temp << " lb "<< std::endl;
    }

    std::cout << "After 6 months, you lost " << (starting_weight - temp) << "lbs\n"; 
    

    return 0;
}