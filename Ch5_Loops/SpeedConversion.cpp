#include <iostream>
#include <vector>
#include <iterator>
double kilo2miles(int kph){
    return kph * 0.6217;
}

void print(std::vector<double> &s, int m){

  std::vector<double>::const_iterator c1;
 
  for(c1 = s.begin(); c1 != s.end(), m <= 120; c1++, m+=10){
      std::cout << m << " kph\t\t == \t\t" << *c1 << " mph\n";
  }  

}

int main(){
    std::vector<double> mphs;
    int kilo = 10;
    double mph = 0.0;
    while(kilo <= 120){
        mph = kilo2miles(kilo);
        mphs.push_back(mph);
        kilo+=10;
    }
    kilo = 10;
    print(mphs, kilo);
    std::cout << "Skonka Bitch.\n";

return 0;
}