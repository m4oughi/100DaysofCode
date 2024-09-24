#include <iostream>
#define N 4 // Define N (you can change this value)

using namespace std;

// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    // Check the row on the left side
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1)
            return false;
    }

    // Check the upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1)
            return false;
    }

    // Check the lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j] == 1)
            return false;
    }

    // If no queens are attacking the position, it's safe
    return true;
}

// Recursive function to solve the N-Queens problem
bool solveNQueens(int board[N][N], int col) {
    if (col >= N) // Base Case: all queens placed
        return true;

    // Try placing a queen in all rows of the current column
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;  // Place the queen

            // Recursively place the next queen in the next column
            if (solveNQueens(board, col + 1))
                return true;

            // If placing queen in board[i][col] doesn't lead to a solution, backtrack
            board[i][col] = 0;
        }
    }

    return false; // If the queen cannot be placed in any row in this column
}

// Utility function to print the board
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int board[N][N] = {0}; // Initialize the board with 0s

    if (solveNQueens(board, 0)) {
        printSolution(board);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
