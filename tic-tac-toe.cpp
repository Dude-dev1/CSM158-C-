#include <iostream>
#include <vector>

using namespace std;

// Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if the game is over
bool gameOver(const vector<vector<char>>& board) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;

    // Check if the board is full (tie)
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ')
                return false;
        }
    }

    // If no winner and board is full, it's a tie
    return true;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize an empty 3x3 board
    int row, col;
    char currentPlayer = 'X';

    cout << "Welcome to Tic Tac Toe!\n";

    while (!gameOver(board)) {
        cout << "Current board:\n";
        printBoard(board);

        // Get player's move
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        // Place player's move on the board
        board[row][col] = currentPlayer;

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // Game over, print final board
    cout << "Final board:\n";
    printBoard(board);

    // Check winner
    if (gameOver(board)){
        cout << "Game over!\n";
        cout << " You win " << endl;
    }else{
        cout << "It's a tie!\n";
    }

    return 0;
}
