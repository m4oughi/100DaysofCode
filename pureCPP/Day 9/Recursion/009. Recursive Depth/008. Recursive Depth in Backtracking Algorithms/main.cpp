#include <iostream>
using namespace std;

#define N 9  // Sudoku is a 9x9 grid

bool findEmptyLocation(int board[N][N], int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0)
                return true;  // Found an empty location
        }
    }
    return false;  // No empty location found
}

bool isSafe(int board[N][N], int row, int col, int num) {
    // Check the row
    for (int x = 0; x < N; x++)
        if (board[row][x] == num)
            return false;

    // Check the column
    for (int x = 0; x < N; x++)
        if (board[x][col] == num)
            return false;

    // Check the 3x3 subgrid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num)
                return false;

    return true;  // Safe to place the number
}

bool solveSudoku(int board[N][N]) {
    int row, col;

    if (!findEmptyLocation(board, row, col))  // Puzzle solved
        return true;

    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board))  // Recursive depth depends on the puzzle complexity
                return true;

            board[row][col] = 0;  // Backtrack
        }
    }
    return false;
}

void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        printBoard(board);
    } else {
        cout << "No solution exists!" << endl;
    }

    return 0;
}
