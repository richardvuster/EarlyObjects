#include <iostream>

int main(){
    int lineBreaker = 1;
    for(int i = 32; i <= 127; i++){
        lineBreaker++;
        std::cout << char(i) << " ";
        if(lineBreaker % 16 == 0){
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    std::cout << "YO mom is a big fat hoe!";
    return 0;
}