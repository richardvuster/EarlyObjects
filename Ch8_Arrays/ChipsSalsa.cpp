#include <iostream>
#include <string>

/*
keep track of five different salsa: mild, medium, sweet, hot, zesty.
two parallel fiive-element arrays: array of strings for salsa name and array of integers sold during the past month for each salsa type
progam should display sales for each salsa type, total sales, and the highest and lowest selling salsa

*/

typedef int * Array;

void getSalsaAmount(Array ar, const std::string n[], const int s){

    for(int i = 0; i < s; i++){
        std::cout << "Enter in past month sell on " << n[i] << ": ";
        std::cin >> ar[i];
    }
}

int totalSales(Array ar, const int s){
    int total = 0;
    for(int i = 0; i < s; i++){
        total += ar[i];
    }
    return total;
}

void getStats(const Array ar, const std::string n[], const int s){
    int min, large, minIndex, largeIndex;
    min = large = ar[0];
    for(int i = 1; i < s; i++){

         if(min > ar[i]){
            min = ar[i];
            minIndex = i;
        }
         if(large < ar[i]){
            large = ar[i];
            largeIndex = i;
        }

       
    }

    std::cout << "Lowest selling product is " << n[minIndex] << " with value of " << min << std::endl;
    std::cout << "Largest selling product is " << n[largeIndex] << " with value of " << large << std::endl;
}

int main(){

    const int size = 5;
    std::string salsas[size] = {"mild", "medium", "sweet", "hot", "zesty"};
    int * amount = new int [size];

    getSalsaAmount(amount, salsas, size);
    int sales = totalSales(amount, size);
    std::cout << "Total sales is " << sales << " jars!\n";   

    getStats(amount, salsas, size);  

    delete [] amount;
    amount = nullptr;

    return 0;
}

/*
need to understand this min/max problem
if(10 > 5):
    min = 5

if(20 < 30):
    max = 30

*/