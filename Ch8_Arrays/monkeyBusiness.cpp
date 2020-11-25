#include <iostream>
/*
2-d array: [3][7] to keep track of three monkey and its daily lb of food consumed. 

report the following information:
1) average amount of food eaten per day by the whole family of monkeys
2) least amount of food eaten during the week by any one family
3) the greatest amount of food eaten during the week by any one monkey

*/

void printArray(int ** arr, size_t rows, size_t cols){
    int sum = 0;
    std::cout << "   ";
    for(size_t i = 0; i < cols; i++) { std::cout << i << "\t";}
    //std::cout << std::endl;
    std::cout << "\n-----------------------------------------------------\n";
    
    for(size_t i = 0; i < rows; i++){

        std::cout << i << ": ";
        for(size_t j = 0; j < cols; j++){

            std::cout << arr[i][j] << "\t";
            sum += arr[i][j];
        }
        std::cout << " = " << sum << std::endl;
        sum = 0;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void setArray(int ** arr, size_t rows, size_t cols){

    for(size_t i = 0; i < rows; i++){

        std::cout << "Enter in food eaten for monkey " << i + 1 << std::endl;
        for(size_t j = 0; j < cols; j++){

            std::cin >> arr[i][j];
            
        }
    }
    std::cout << std::endl;
}

//calculate average amount of food eaten per day by the whole family of monkeys
//so average day 1 for three monkeys, day2 for three monkeys, day 3 for three monkeys .... day 7 for three monkeys
/*
day 1: [0][0] + [1][0] + [2][0]
day 2: [0][1] + [1][1] + [2][1]
day 3: [0][2] + [1][2] + [2][2]
day 4: [0][3] + [1][3] + [2][3]
day 5: [0][4] + [1][4] + [2][4]
day 6: [0][5] + [1][5] + [2][5]
day 7: [0][6] + [1][6] + [2][6]
*/
void averageEaten(int **arr, size_t rows, size_t cols){

    int day1 ,day2, day3, day4, day5, day6, day7;
    day1 = day2 = day3 = day4 = day5 = day6 = day7 = 0.0;
    for(size_t i = 0; i < rows; i++){

        for(size_t j = 0; j < cols; j++){

            switch(j){
                case 0:
                    day1 = day1 + arr[i][j];
                    break;
                case 1:
                    day2 += arr[i][j];
                    break;
                case 2: 
                    day3 += arr[i][j];
                    break;
                case 3:
                    day4 += arr[i][j];
                    break;
                case 4:
                    day5 += arr[i][j];
                    break;
                case 5:
                    day6 += arr[i][j];
                    break;
                case 6:
                    day7 += arr[i][j];
                    break;
                default:
                    break;
            }
        }
    }
    std::cout << "Family of monkeys average " << day1 / 3 << " lbs of food for day 1.\n";
    std::cout << "Family of monkeys average " << day2 / 3 << " lbs of food for day 2.\n";
    std::cout << "Family of monkeys average " << day3 / 3 << " lbs of food for day 3.\n";
    std::cout << "Family of monkeys average " << day4 / 3 << " lbs of food for day 4.\n";
    std::cout << "Family of monkeys average " << day5 / 3 << " lbs of food for day 5.\n";
    std::cout << "Family of monkeys average " << day6 / 3 << " lbs of food for day 6.\n";
    std::cout << "Family of monkeys average " << day7 / 3 << " lbs of food for day 7.\n\n";
}
// 2) least amount of food eaten during the week by any one family
void leastFoodEaten(int **arr, size_t rows, size_t cols){
    int threeMonkeys[rows];
    int sum = 0;
    for(size_t i = 0; i < rows; i++){
        
        for(size_t j = 0; j < cols; j++){

            sum += arr[i][j];
        }
        //std::cout << "Monkey " << i + 1 << " ate " << sum << " lbs of food this week.\n";
        threeMonkeys[i] = sum;
        sum = 0;
    }
    int low = threeMonkeys[0], l;
    for(size_t k = 0; k < rows; k++){
        if(low > threeMonkeys[k]){
            low = threeMonkeys[k];
            l = k;
        }
    }
    std::cout << "\nMonkey " << l + 1 << " ate the lowest with " << low << " lbs of food this week.\n\n";
}

//3) the greatest amount of food eaten during the week by any one monkey

void mostFoodEaten(int **arr, size_t rows, size_t cols){
    int threeMonkeys[rows];
    int sum = 0;
    for(size_t i = 0; i < rows; i++){
        
        for(size_t j = 0; j < cols; j++){

            sum += arr[i][j];
        }
        //std::cout << "Monkey " << i + 1 << " ate " << sum << " lbs of food this week.\n";
        threeMonkeys[i] = sum;
        sum = 0;
    }
    int high = threeMonkeys[0], h;
    for(size_t k = 0; k < rows; k++){
        if(high < threeMonkeys[k]){
            high = threeMonkeys[k];
            h = k;
        }
    }
    std::cout << "\nMonkey " << h + 1 << " ate the highest with " << high << " lbs of food this week.\n\n";
}
int main(){
    const size_t rows = 3;
    const size_t cols = 7;
    int *arr[rows];
    for(int i = 0; i < rows; i++){
        arr[i] = new int [cols];
    }   

    
    setArray(arr, rows, cols);
    printArray(arr, rows, cols);
    averageEaten(arr, rows, cols);
    leastFoodEaten(arr, rows, cols);
    mostFoodEaten(arr, rows, cols);
    //deallocate array
    for(size_t i = 0; i < rows; i++){
        delete [] arr[i];
    }

    std::cout << "It wokred?" << std::endl;
    


    return 0;
}

/*
Most Challenging problem yet. Figuring out how to sum of the average for three monkeys per day was a tad bit confusing. 
I finally used the switch case effectively :) 

*/