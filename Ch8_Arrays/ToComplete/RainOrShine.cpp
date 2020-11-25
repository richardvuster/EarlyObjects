#include <iostream>
#include <fstream>
#include <string>
//#include <sstream>

void print(char ** arr, size_t row, size_t col){

    for(size_t i = 0; i < row; i++){

        for(size_t j = 0; j < col; j++){

            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void setValue(char ** arr, size_t row, size_t col, char input){
    arr[row][col] = input;
}
int main(){

    size_t rows = 3;
    size_t cols = 30;
    char * months[rows];
    for(int i = 0 ; i < rows; i++){
        months[i] = new char [cols];
    }
    std::ifstream inFile("rain_or_shine.dat");

    if(!inFile){
        std::cerr << "Could not open file WTF.\n";
        exit(1);
    }
    std::string lines[rows];
    std::string line;
    
    
    int row = 0;
    while(std::getline(inFile, line)){
       
       for(size_t i = 0; i < line.size(); i++){
           setValue(months, row, i, line[i]);
       }
       row+=1;
       std::cout << std::endl;
    }
    //storeLine(months, rows, cols, lines);
    //deallocate
    for(size_t i = 0; i < rows; i++){
        delete [] months[i];
    }

    //delete [] months;
    inFile.close();
    return 0;
}

/*
Problems: How do i get the char of each letter in a line and store in a 2-d array 

*/