#include <iostream> 

/*
The greatest and Least of inputs: 
*/

int main(){

    int sentinels = -99;
    int input, min = 0, max = 0;
    while(true){
        std::cout << "Enter in a number: ";
        std::cin >> input;

        if(input == sentinels){
            break;
        }
        if(input < min){
            min = input;
        }
        if(input > max ){
            max = input;
        }
    }
    std::cout << "Minimum value: " << min << std::endl;
    std::cout << "Maximum value: " << max << std::endl;
    return 0;
}