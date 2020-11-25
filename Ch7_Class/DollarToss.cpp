#include <iostream>
#include <string> 
#include <iomanip>
#include <random> 
class Coin {
public:
    Coin(double v) :  value(v){
        heads = 0;
        tails = 0;
    }
    void setSideUp(std::string s){
        this->sideUp = s;
    }
    double toss(int i){
        std::string heads = "heads";
        std::string tails = "tails";
        if(i == 0){
            setSideUp(heads);
            this->heads++;
            return this->coinValue();
        } else{
            setSideUp(tails);
            this->tails++;
            return 0;
        }
    }
    double coinValue() const{
        return this->value;
    }
    int heads_() const {
        return this->heads;
    }

    int tails_() const {
        return this->tails;
    } 
    std::string getSideUp() const{
        return this->sideUp;
    }
    void printpretty() const{
        std::cout << this->value << " tossed heads " << this->heads << " times; Tossed tails " << this->tails << " times.\n";
    }
private:
    std::string sideUp;
    int heads;
    int tails;
    double value;
};

int MandoNum(){
    std::random_device device;
    std::mt19937 gen(device());
    std::uniform_int_distribution<int> distro(0,1);

    return distro(gen); 
}

int main(){
    Coin qtr(.25);
    Coin nickel(0.05);
    Coin dime(0.10);
    double toss1, toss2, toss3;
    double balance = 0.0;
    while(true){
        
        if(balance >= 1.0){
            break;
        }
        toss1 = qtr.toss(MandoNum());
        toss2 = nickel.toss(MandoNum());
        toss3 = dime.toss(MandoNum()); 
        balance += toss1 + toss2 + toss3;
        
        
    }
    qtr.printpretty();
    dime.printpretty();
    nickel.printpretty();

    //std::cout << std::fixed << std::setprecision(2);
    if(balance == 1){
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "You won! Perfect balance of $" << balance << std::endl;
    } else{
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "You lost! Balance exceeds $1. Your balance is $" << balance << std::endl;
    }

    std::cout << "Yo mom is a foooooo. Don't smoke the brokeeen Windows okurrr skrrrrr.\n";
}
/*
three coin instances: quarter, dime, nickel
- so inside loop: three tosses 
instead of 20 rounds, the toss will go until the balance is >= 1.00 

*/