#include <iostream>

/*
Problem Assumation.
Earth's Ocean continues to rise at about 3.1 millimeters per year. Write a program that displays a table showing the cumulative # of 
millimeters the ocean will rise for the next 25 years;
*/

int main(){
    double ocean_levels = 3.1;
    double total = ocean_levels;
    for(int i = 1; i <=27; i++){
        std::cout << "Year " << i << " rises " << total << " millimeters\n";
        total += ocean_levels;

        if(i % 3 == 0){
            std::cout << std::endl;
        }
    }

    std::cout << "Skonka Bitch.\n";
    return 0;
}