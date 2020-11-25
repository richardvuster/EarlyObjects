#include <iostream>
#include <string> 
#include <iomanip>
/*
Problem definition:
    division_name = {East, West, North, South}
    qrt_sales = {qrt1, qrt2, qrt3, qrt4}
    program create four corpData variables, each representing the divison name.
    variables passed one at a time as constant references to a function that computes division's annual sale, and quarterly average
*/
struct CorpData{
    std::string division_name;
    double qrt1;
    double qrt2;
    double qrt3;
    double qrt4;

    CorpData(std::string s = "EastWestNorthSouth", double q1 = 0.0, double q2 = 0.0, double q3 = 0.0, double q4 = 0.0) 
                    : division_name(s), qrt1(q1), qrt2(q2), qrt3(q3), qrt4(q4) {}

};

CorpData setData(){
    std::string s;
    double q1, q2, q3, q4;
    std::cout << "Enter in division name: ";
    std::cin >> s;
    std::cout << "Enter in quarterly sale for q1: ";
    std::cin >> q1;
    std::cout << "Enter in quarterly sale for q2: ";
    std::cin >> q2;
    std::cout << "Enter ein quarterly sale for q3: ";
    std::cin >> q3;
    std::cout << "Enter in quarterly sale for q4: ";
    std::cin >> q4;

    return CorpData(s, q1, q2, q3, q4);
}

void computeStuff(const CorpData & c){
    //compute annual and average
    double annual = c.qrt1 + c.qrt2 + c.qrt3 + c.qrt4;
    double average = annual / 4;
    
    std::cout << "\nCoporate Division Name \t\t quarter1 \t\t quarter2 \t\t quarter3 \t\t quarter4 \t\t\n";
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << c.division_name << " \t\t\t\t $" << c.qrt1 << "  \t\t  $" << c.qrt2 << " \t\t  $" << c.qrt3 << " \t\t  $" << c.qrt4 << "\n\n";
    std::cout << "Annual sales total is $" << annual << "\n";
    std::cout << "Quarterly Average total is $" << average << "\n\n";
}

int main(){

    CorpData corps[4];
    /*
    for(int i = 0; i < 4; i++){
       corps[i] = setData(); 
    }
    */
    corps[0] = CorpData("west", 12.2, 15.1, 17.6, 12.12);
    corps[1] = CorpData("north", 1000, 2000, 3000, 4000);
    corps[2] = CorpData("east", 45, 34.4, 17.7, 19.99);
    corps[3] = CorpData("south", 35.3, 45.4, 56.5, 67.6);

    //now get information
    for(int i = 0; i < 4; i++){
        computeStuff(corps[i]);
    }

    return 0;
}