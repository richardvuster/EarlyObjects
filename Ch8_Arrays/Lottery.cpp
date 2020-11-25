#include <iostream>
#include <random> 
#include <vector>

void setWinningDigits(int * digits, int start, int end, const size_t size){
    
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distro(start, end);

    for(size_t i = 0; i < size; i++){
        *(digits + i) = distro(generator); 
    }
}

void printArray(const char * word, int * ar, const size_t s){
        std::cout << word << ": ";
        for(int j = 0; j < s; j++){
            std::cout << *(ar + j) << " ";
        }
        std::cout << std::endl;
}

void compareDigits(int * winner, int * play, const int size){
    std::vector<int> match;
    for(int i = 0; i < size; i++){
        if(winner[i] == play[i]){
            match.push_back(i);
        }
    }
    if(!match.empty()){
        std::cout << "There are " << match.size() << " matching digits, ";
        for(size_t i = 0; i < match.size(); i++){
            std::cout << play[match.at(i)] << ", ";
        }
        std::cout << std::endl;
    } else{
        std::cout << "There are no matches!\nGame Over Bitch!\n";
    }
}

int main(){
    const int size = 5;
    int * winningDigits = new int[size];
    setWinningDigits(winningDigits, 0, 9, size);
    //printArray(winningDigits, size);

    //get user's digit
    int * player = new int [size];
    std::cout << "Enter in your five digits for the lottery: ";
    for(int i = 0; i < size; i++){
        std::cin >> *(player + i);
    }
    printArray("Winning Digits", winningDigits, size);
    printArray("Player Digits", player, size);
    compareDigits(winningDigits, player, size);
    
    delete [] winningDigits;
    winningDigits = nullptr;
    delete [] player;
    player = nullptr;

    std::cout << "It worked right???";
    return 0;
}