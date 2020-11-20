#include <iostream>

class Tips{
public:
    Tips(double r = 0.0855){
        if(r < 1){
            taxRate = r;
        }
        taxRate = r / 100;
    }

    double getTaxRate() const {
        return taxRate;
    }
    double computeTip(double bill, double tipRate){
        if(tipRate > 1){
            //20% -> .2
            tipRate = tipRate / 100;
        }
        double totalCost = bill + (bill * getTaxRate());


        return totalCost * tipRate; 
    } 
private:
    double taxRate;
}; 

int main() {
    Tips t1 {7.75};
    int sentinels = -99;
    int choice;
    double bill, tip, totalTip;
    do{
        std::cout << "Enter in bill amount before tax: ";
        std::cin >> bill;
        std::cout << "Enter in tip rate: ";
        std::cin >> tip;

        std::cout << "Tip amount with " << tip << "% tip is $" << t1.computeTip(bill, tip) << std::endl;
        std::cout << "Enter in -99 to quit, or any other number to continue: ";
        std::cin >> choice; 
    }while(choice != -99);
}

/*
Problems: cents are not printing correctly. 
How can I improve this code: ?

*/