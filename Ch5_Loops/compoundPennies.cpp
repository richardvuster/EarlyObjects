#include <iostream>
#include <iomanip>


int main(){
    
    double network = 0.01;
    
    std::cout << std::fixed << std::setprecision(2);
    for(int i = 1; i <= 31; i++){
        if(network > 1){
            std::cout << "Day " << i << " is $" << network << std::endl;
            network *= 2;
        } 
        else{
         std::cout << "Day " << i << " is " << network << std::endl;
         network *= 2;   
        }
        
    }
    std::cout << std::endl;

    return 0; 
}

/*
How can I fix this problem?

    - I can try to fix the if/else. Figure out a way to add the $ if the value is over 1 dollar. 
    - Figure out a way to add a commma in where it is needed. 


*/