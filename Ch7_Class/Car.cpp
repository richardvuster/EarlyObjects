#include <iostream>
#include <string>

class Car{
public:
    Car(int y, std::string m) : year(y), maker(m) { 
        speed = 0;
    }

    //accessors 
    int getYear() const {
        return year;
    }
    std::string getMaker() const{
        return maker;
    }
    int getSpeed() const{
        return speed;
    }

    //manipulation functions
    void accelerate(){
        this->speed += 5;
    }
    void brake(){
        this->speed -= 5;
    }

    //overload operators
    friend std::ostream & operator<<(std::ostream &os, const Car & c){
        os << "Maker: " << c.getMaker() << "\nYear: " << c.getYear() << "\nSpeed: " << c.getSpeed() << " mph.\n\n";
        return os;
    }
private:
    int year;
    std::string maker;
    int speed;

};
int main() {

    Car c1{2020, "Honda Civic SI"};
    c1.accelerate();
    c1.accelerate();
    std::cout << c1 << std::endl;
    c1.accelerate();
    std::cout << c1 << std::endl;
    c1.accelerate();
    c1.accelerate();
    std::cout << c1 << std::endl;
    c1.brake();
    c1.brake();
    c1.brake();
    c1.brake();
    c1.brake();
    c1.brake();

    std::cout << c1 << std::endl;
}