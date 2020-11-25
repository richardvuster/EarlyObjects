#include <iostream>
#include <random>

//pass in pointer arr as `int * arr`
void setArr(const size_t s, int start, int end){
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distro(start,end);

    for(size_t i = 0; i < s; i++){
        std::cout << distro(generator) << " ";
    }
    std::cout << std::endl;
}
int main(){
    int * arr = new int [25];
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distro(1,100);

    for(size_t i = 0; i < 25; ++i){
        *(arr + i) = distro(generator);
    }

    for(size_t i = 0; i < 25; i++){
        if(i % 5 == 0){
            std::cout << std::endl;
        }
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    delete [] arr;
    arr = nullptr;

    std::cout << "Yo mom is a hoe.\n";
    return 0;

}