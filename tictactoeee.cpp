#include <iostream>
using namespace std;

char square[10];

void resetBoard() {
    for (int i = 0; i < 10; i++) {
        square[i] = '0' + i;
    }
}

int checkwin();
void board();
bool makeMove(int player, int choice);

int main() {
    char playAgain;
    do {
        resetBoard(); 
        int player = 1, i, choice;

        do {
            board();
            player = (player % 2) ? 1 : 2;
            cout << "Player " << player << ", enter a number (1-9): ";
            cin >> choice;

            if (!makeMove(player, choice)) {
                cout << "Invalid move, try again." << endl;
                player--; 
            }

            i = checkwin();
            player++;
        } while (i == -1);

        board();
        if (i == 1)
            cout << "==>\aPlayer " << --player << " wins!";
        else
            cout << "==>\aGame draw";

        cout << "\n\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}


int checkwin() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
             && square[4] != '4' && square[5] != '5' && square[6] != '6' 
             && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1; 
}


void board() {
    system("cls"); 
    cout << "\n\n\tTic Tac Toe\n\n";
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl << endl;
}

bool makeMove(int player, int choice) {
    char mark = (player == 1) ? 'X' : 'O';
    if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice) {
        square[choice] = mark;
        return true;
    }
    return false;
}
