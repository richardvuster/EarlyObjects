#include <iostream>
#include <random>

int main(){
    int range = 0;
    std::cout << "Enter in range from 1 - .. ";
    std::cin >> range;
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(1, range);

    int rando = distribution(generator);
    int choice;
    bool notDone = true;
    int counter = 0;

    while(notDone){
        std::cout << "Enter in a number between [1," << range << "]:\n";
        std::cin >> choice;
        
        if(choice > rando){
            std::cout << "Number to high, enter in a lower number!!!\n";
            counter++;
        }
        else if(choice < rando){
            std::cout << "Number to small, enter in a larger number!!!!\n";
            counter++;
            
        }
        else{
            notDone = false;
        }
    }
    std::cout << "You guessed the number " << choice << " which is the correct answer, since rando number was " << rando << std::endl;
    std::cout << "It took you " << counter << " tries to get it right.!\n";
    std::cout << std::endl;

    return 0;
}