#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int numberToGuess = rand() % 100 + 1; 
    int attempts = 0;
    char playAgain;
    int playerGuess;

    do {
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;

        
        attempts = 0;

        do {
            cout << "Enter your guess: ";
            cin >> playerGuess;
            attempts++;

            if (playerGuess > numberToGuess) {
                cout << "Too high! Try again." << endl;
            } else if (playerGuess < numberToGuess) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Congratulations! You've guessed the number " << numberToGuess 
                     << " in " << attempts << " attempts!" << endl;
            }

        } while (playerGuess != numberToGuess);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        
        if (playAgain == 'y' || playAgain == 'Y') {
            numberToGuess = rand() % 100 + 1; 
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}
