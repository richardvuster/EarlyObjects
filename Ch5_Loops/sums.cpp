#include <iostream>

/*
Problem 2: sum of numbers: sum of all integers from 1 up to numbered entered
*/
int main(){

    int sum = 0;
     while(sum <= 0){
        std::cout << "Enter in a positive sum: ";
        std::cin >> sum;
    }

    int total = 0;
    for(int i = 1; i <=sum; i++){
        std::cout << total << " + " << i;
        total += i;
        std::cout << " = " << total << std::endl;
    }

    return 0;
}