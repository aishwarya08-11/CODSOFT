#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int playerGuess = 0;
    int attempts = 0;
    char playAgain;

    do {
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;

        // Reset attempts for the new game
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
            numberToGuess = rand() % 100 + 1; // Generate a new number
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}
