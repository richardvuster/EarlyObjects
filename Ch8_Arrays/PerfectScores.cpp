#include <iostream>

typedef int * array;

void getInput(array nums, const int s){
    std::cout << "Enter in array inputs!!\n\n";
    int index = 0;
    int n;
    while(index < s){
        std::cout << "Enter in number for index " << index + 1 << ": ";
        std::cin >> nums[index];
        index++;
    }
}

void printArray(array arr, const int s){

    for(int j = 0; j < s; j++){
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void countPerfect(array arr, const int s, int &perfect){

    for(int j = 0; j < s; j++){

        if(arr[j] == 100){
            perfect++;
        }
    }
}

int main(){

    const int size = 20;
    int * arr = new int [size];
    getInput(arr, size);
    printArray(arr, size);
    int perfects = 0;
    countPerfect(arr, size, perfects);
    std::cout << "There are " << perfects << " score of 100.\n";
    delete [] arr;
    arr = nullptr;

    return 0;
}