#include <iostream>
#include <random>
#include <utility>
#include <iterator>
#include <map>

//random generator for double

int main(){
    std::map<int, double> mando;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(1.0, 20.0);

    for(int i = 0; i < 12; i++){
       mando.insert(std::pair<int, double>(i, dist(gen)));
    }

    //print map
    std::map<int, double>::iterator itr;
    std::cout << "The map mando is : \n";
    std::cout << "\tKEY\tELEMENT\n";
    for(itr = mando.begin(); itr != mando.end(); ++itr){
        std::cout << "\t" << itr->first << "\t" << itr->second << "\n";
    }
    std::cout << std::endl;
    
    std::cin.get();
}