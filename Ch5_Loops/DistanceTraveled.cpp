#include <iostream>
#include <string>
int main() {

    int mph, hours;
    std::cout << "What is the spped of the vechicle in mph? ";
    std::cin >> mph;
    std::cout << "How many hours has it traveled? ";
    std::cin >> hours;

    int h = 1;
    std::string header {"Hours \t\tMiles Traveled\n"};
    std::cout << header << std::endl;
    std::string line(header.length(), '*');
    std::cout << line << std::endl;

    int temp;
    while(h <=hours){
        temp = h * mph;
        std::cout << h << "\t\t" << temp << "\n";
        h++;
    }

    return 0;
   
}