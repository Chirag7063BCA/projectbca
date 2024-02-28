#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class GuessTheNumber {
private:
    int computerGeneratedNumber;
    int userGuessedNumber;
public:
void startGame() {
        int attempts = 0;
        cout << "Welcome to Guess Number Game!" << endl;
        cout << "A random number between 1 and 100 has generated. Start guessing :-" <<endl;

        do {
            cout << "Guess the number: ";
            cin >> userGuessedNumber;
            //showing the user that how many attempts he/she have 
            attempts++;
           //if statement is used here because we are checking that the random number is equal to the user choice 
            if (userGuessedNumber < computerGeneratedNumber)
             {
                cout <<"Attempt:- " << attempts <<endl;
                cout <<" Your number is smaller than computer generated number"<<endl;
            } else if (userGuessedNumber > computerGeneratedNumber) 
            {
                cout << "Attempt:- " << attempts <<endl;
                cout << " Guessed number is greater than computer generated number" <<endl;
            } else{
                cout << "Attempt:- " << attempts <<endl;
                cout << " Congratulations! You won the game in " << attempts << " attempts"<<endl;
                break;
            }
        } while (true);
    }
    void generateRandomNumber() {
        srand(time(0)); 
         
        computerGeneratedNumber = rand() % 100 + 1;
    }   
};

int main() {
    GuessTheNumber game;
    game.generateRandomNumber();
    game.startGame();
    return 0;
}