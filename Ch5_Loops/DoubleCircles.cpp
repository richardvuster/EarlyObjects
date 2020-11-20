#include <iostream>
#include <iomanip>
const double PI = 3.14159;
double areaCircle(int r){
    return (r * r) * PI;
}

int main(){
    double doubleRadius;
    double network = 0.01;
    //std::cout << std::fixed << std::setprecision(3);
    for(int i = 1; i <= 8; i++){
        doubleRadius = i * 2;
        std::cout << "Radius " << i << " area is " << areaCircle(i) << "\nRadius " << i << " * 2 = " << doubleRadius << " area is " << areaCircle(doubleRadius) << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0; 
}