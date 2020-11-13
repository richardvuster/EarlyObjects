#include <iostream>

int main(){

    int temp = 1425;
    int hundreds = temp % 1000;
    int tens = hundreds % 100;
    std::cout << temp << " " << hundreds << " " << tens << " " << tens % 10 << std::endl;

    return 0;
}