#include <iostream>

const int YEAR = 2000;
const int MONTHS = 12;

class Date{
public: 
    Date(int m = 1, int d = 1, int y = 2001) : month(m), day(d), year(y) {}

    int getMonth() const {
        return month;
    }
    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }
    void printOneWay() const{
        
        std::cout << getMonth() << "/" << getDay() << "/" << getYear() % YEAR << std::endl;
    }

    //void (std::string &arr[MONTHS]) => error array of reference not allowed
    void printSecondWay(std::string (&arr)[MONTHS]) const {
        
        std::cout << arr[getMonth() - 1] << " " << getDay() << ", " << getYear() << std::endl;
    }

    void printThirdWay(std::string (&arr)[MONTHS]) const {

        std::cout << getDay() << " " << arr[getMonth() - 1] << " " << getYear() << std::endl;
    }

private:
    int month;
    int day;
    int year;
};

int main(){

    Date s1; 
    std::string months[MONTHS] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
    s1.printOneWay();
    s1.printSecondWay(months);
    s1.printThirdWay(months);

    std::cout << std::endl;

    Date s2 {12, 25, 2024};
    s2.printOneWay();
    s2.printSecondWay(months);
    s2.printThirdWay(months);

    std::cin.get();
    return 0;
}
