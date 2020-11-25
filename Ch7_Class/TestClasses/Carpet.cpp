#include <iostream>
#include <iomanip> 
/*
Class Composition 
*/
class Rectangle{
public:
    void setLength(double l) {
        this->length = l;
    }
    void setWidth(double w){
        this->width = w;
    }
    double getLength() const {
        return this->length;
    }
    double getWidth() const {
        return this->width;
    }
    double calcArea() const {
        return this->length * this->width;
    }
private:
    double length;
    double width;
};

class Carpet{
public:
    void setPricePerYd(double p){
        this->pricePerSqYrd = p;
    }

    void setDimensions(double l, double w) {
        //convert feet to yard 
        size.setLength(l/3);
        size.setWidth(w/3);
    }
    double getTotalPrice(){
        return size.calcArea() * this->pricePerSqYrd;
    }
private:
    double pricePerSqYrd;
    Rectangle size; //size is an instance of the rectangle class 
};

int main(){

    Carpet purchase;
    double pricePerYd;
    double length; 
    double width;

    std::cout << "Enter in Room length in feet: ";
    std::cin >> length;
    std::cout << "Enter in Room width in feet: ";
    std::cin >> width;

    std::cout << "Enter in carpet rpice per sq. yard: ";
    std::cin >> pricePerYd;

    purchase.setDimensions(length, width);
    purchase.setPricePerYd(pricePerYd);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nThe total price of a new " << length << " x " << width << " carpet is $" << purchase.getTotalPrice() << std::endl;

    return 0;
}