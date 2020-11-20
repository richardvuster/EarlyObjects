#include <iostream>

const double CAL = 3.9;

int main(){
    int min = 1;
    double total = 0.0;
    while(min <= 30){
        total+= CAL;
        if(min % 5 == 0){
            std::cout << "In " << min << " minutes you burned " << total << " calories!!\n";
        }
        min++;
    }
    return 0;
}