#include <iostream>
#include <string>
class SoccerPoints{
public:
    SoccerPoints(std::string n) : teamName(n), wins(0), losses(0), tie(0) {}
    void updateWins(){ 
        this->wins++;
    }
    void updateTies() {
        this->tie++;
    }
    void updateLosses() {
        this->losses++;
    }
    int updatePoints() const{
        return (this->wins * 3) + (this->tie * 1) + (this->losses * 0);
    }

    void displayRecord() const {
        std::cout << "TeamName: " << this->teamName << "\nGames Won: " << this->wins << "\tGames Lost: " << this->losses << "\tGames Tie: " << this->tie <<"\n";
        std::cout << "Team has a total of " << updatePoints() << " points !\n\n";
    }
    void displayMenu() const {
        std::cout << "Welcome to the SoccerGame Tracker ~!~\nEnter in 'w' or 'W' for a win.\nEnter in t or T for a tie.\nEnter in 'l' or 'L' for loss.\nEnter in 'q' or 'Q' to exit\n\n";
    }

private:
    std::string teamName;
    int wins;
    int losses;
    int tie;
    //int totalPoints;
};

int main(){

    std::string teamname;
    std::cout << "Enter in team name: ";
    std::getline(std::cin, teamname);
    std::cin.ignore();
    char choice;
    int games = 0, nongames = 0;
    SoccerPoints p(teamname);
    
    while(true){
        p.displayMenu();
        std::cin >> choice;

        if(choice == 'w' || choice == 'W'){
            p.updateWins();
            games++;
        }
        else if (choice == 't' || choice == 'T'){
            p.updateTies();
            games++;
        }
        else if(choice == 'l' || choice == 'L'){
            p.updateLosses();
            games++;
        }
        else if(choice == 'q' || choice == 'Q'){
            break;
        }else{
            nongames++;
            continue;
        }
    }
    std::cout << "The teamed played " << games << " games this seaason.\n";
    p.displayRecord();

    std::cout << "You entered " << nongames << " incorrect choices man wtf follow the instructions bro.\n";

    return 0;
}