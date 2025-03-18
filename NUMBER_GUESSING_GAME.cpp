/*Create a program that generates a random number and asks the user to guess it.provide feedback on
 whether the guess is too high or to low until the user guesses the correct number.*/
 
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

class NumberGuessingGame {
private:
    int randomNumber;

public:
    // Constructor to initialize the random number
    NumberGuessingGame() {
        srand(time(0));
        randomNumber = rand() % 10 + 1;
    }

    // Method to display the welcome message
    void displayWelcomeMessage() {
        system("cls");
        cout << "=====================================================================================================================================================\n\n";
        cout << "                                                     WELCOME TO NUMBER GUESSING GAME\n\n";
        cout << "=====================================================================================================================================================\n\n";
        cout << "                                                  *** Guess the number under (1 to 10) *** \n" << endl;
    }

    // Method to start the game
    void playGame() {
        int guess;
        while (true) {
            cout << "Guess your Number: ";
            cin >> guess;

            if (guess < randomNumber) {
                cout << "Too low!\n" << endl;
            } else if (guess > randomNumber) {
                cout << "Too high!\n" << endl;
            } else {
                cout << "\nCongratulation :)\nYou guessed it...\n" << endl;
                break;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.displayWelcomeMessage();
    game.playGame();
    return 0;
}
