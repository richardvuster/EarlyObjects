#include <iostream>
#include <iomanip>
/*
Assumptions: 
country club charges 3k per year for membership. Club has announced an increase in membership fee of 3% each year for the next five years. Calculate funds 
for next five years;
*/
const double RATE = 0.03;
const int SIZE = 5;
double calculateFees(double c){
    
    return (c * RATE);
}
int main(){
    double * arr = new double [SIZE];
    double initial_cost = 3000;

    for(int i = 0; i < SIZE; i++){
        initial_cost += calculateFees(initial_cost);
        arr[i] = initial_cost;
    }

    int j = 0;
    std::cout << std::fixed << std::setprecision(2);
    while(j < SIZE){
        std::cout << "Year " << (j + 1) << " price is $" << *(arr + j) << std::endl;
        j++;
    }

    delete [] arr;

   
    arr = nullptr;
    return 0;
}