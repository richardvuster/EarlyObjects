#include <iostream>

const double CAL = 3.9;
/*
Assumption: burn 3.9 calories per minute. Print out calories burned after 5, 10, 15, .... , 25

*/
int main(){
    int min = 1;
    double total = 0.0;
    while(min <= 30){
        total+= CAL;
        if(min % 5 == 0){
            std::cout << "In " << min << " minutes you burned " << total << " calories!!\n";
        }
        min++;
    }
    return 0;
}

/*
step count: 
+2 declarations
+30(+4) * n


*/