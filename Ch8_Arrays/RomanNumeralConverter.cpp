#include <iostream>
#include <string>
#include <vector> 

/*
print roman numerals from input. 
Assumptions: Input is between 1 - 20 inclusively.
*/
int main(){
    const int size = 20;
    std::string roman[size] = {"I", "II", "III", "VI", "V", "IV", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

    int num; 
    while(true){
        std::cout << "Enter in a number between 1 - 20 or -99 to exit ";
        std::cin >> num;

        if(num >= 20 || num <= 0){
            break;
        }

        if(num == -99){
            break;
        }
        std::cout << num << " in roman numeral is " << roman[num - 1] << std::endl;
    }
    return 0;
}