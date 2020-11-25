#include <iostream> 
#include <string> 
#include <random> 
class Coin {
public:
    Coin(std::string sd) : sideUp(sd){
        heads = 0;
        tails = 0;
    }
    void setSideUp(std::string s){
        this->sideUp = s;
    }
    void toss(int i){
        std::string heads = "heads";
        std::string tails = "tails";
        if(i == 0){
            setSideUp(heads);
            this->heads++;
        } else{
            setSideUp(tails);
            this->tails++;
        }
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
private:
    std::string sideUp;
    int heads;
    int tails;
};

int MandoNum(){
    std::random_device device;
    std::mt19937 gen(device());
    std::uniform_int_distribution<int> distro(0,1);

    return distro(gen); 
}

int main(){
    std::string sideUp = "head\n";
    
    int value;
    int counter = 0;
    Coin cc("heads");
    std::cout << "Initial Side up is " << cc.getSideUp() << std::endl;
    while(counter < 20){
        ++counter;
        value = MandoNum();
        cc.toss(value);
        std::cout << counter << ". Side facing up is " << cc.getSideUp() << std::endl;
        
    }
    std::cout << "\nHeads appeared " << cc.heads_() << " times!\n";
    std::cout << "Tails appeared " << cc.tails_() << " times!\n";
    
    return 0;
}

/*
Assumptions: head = 0, tail = 1
problem definition:
Simulate a coin toss. 
*/