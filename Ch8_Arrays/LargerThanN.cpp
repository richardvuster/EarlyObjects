#include <iostream>
#include <random>
/*
Larger Than input: function should display all of the numbers in the array greater than input n.

Assumptions: this program will accept arguments passed by the command line
first input is the size, second input is the start and end for the random generator.
last input is the number we are comparing too.

*/
typedef int * Array;
void setArr(Array arr, const int s, int start, int end){
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distro(start,end);

    for(int i = 0; i < s; i++){
        arr[i] = distro(generator);
    }
    std::cout << std::endl;
}

void largerThanN(Array arr, const int size, int w){
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] >= w){
            std::cout << arr[i] << " >= " << w << std::endl;
            counter++;
        }
    }
    std::cout << "There are " << counter << " numbers greater than " << w << std::endl;
}
int main(int argc, char * argv[]){

    if(argc < 2){
        std::cout << "No arguments provided.\n";
        exit(1);
    }

    const int size = atoi(argv[1]);
    const int start = atoi(argv[2]);
    const int end = atoi(argv[3]);
    const int input = atoi(argv[4]);

    int * arr = new int [size];
    setArr(arr, size, start, end);
    largerThanN(arr, size, input);

    delete [] arr;
    arr = nullptr;
}