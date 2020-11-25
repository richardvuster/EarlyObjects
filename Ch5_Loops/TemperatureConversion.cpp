#include <iostream>

double cel2fel(int c) {
    return (9/5) * static_cast<double>(c) + 32;
}
int main(){
    char c = 'c';
    char f = 'f';
    std::cout << "Celsius \tFahrenheit" << std::endl;
    //std::string fill("Celsius \tFahrenheit".length(), '*');
    for(int i = 0; i <= 30; i++){
        std::cout << i << "\t\t" << cel2fel(i) << std::endl;
    }

    std::cout << "Foos Gone Wild Skonka Bitch!\n";
}