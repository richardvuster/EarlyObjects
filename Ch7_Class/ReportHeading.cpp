#include <iostream>
#include <iomanip> 
#include <string> 

class ReportHeading {
public:
    ReportHeading(std::string c = "Pet Pals", std::string r= "Payroll Report") : companyName(c), reportName(r) {}

    friend std::ostream & operator <<(std::ostream &os, const ReportHeading & rh) {
        std::string fillX(30, 'x');
        os << fillX << "\n";
        for(int i = 1; i < 10; i++){ std::cout << " ";}
        os << rh.companyName << "\n";
        for(int j = 1; j < 6; j++){ std::cout << " ";}
        os << rh.reportName << "\n";
        os << fillX << "\n";
        return os;
    }

private: 
   std::string companyName;
   std::string reportName;
};

int main(){

    ReportHeading rh1;
    std::cout << rh1 << std::endl;

    ReportHeading rh2 {"Plug & Play", "Smoke dank all day!"};
    std::cout << rh2 << std::endl;

    std::cin.get();
}

/*
Problems:
    - setw() not working in ostream 
    - have to figure out print formatters 
*/