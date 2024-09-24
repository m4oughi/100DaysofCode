#include <iostream>
#include <vector>

#define N 4

// Function to print the board
void printBoard(std::vector<std::vector<int>>& board) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            std::cout << board[i][j] << " ";
        std::cout << std::endl;
    }
}

// Check if placing a queen is safe
bool isSafe(std::vector<std::vector<int>>& board, int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve N-Queens
bool solveNQueens(std::vector<std::vector<int>>& board, int col) {
    if (col >= N)
        return true;  // Base case: all queens placed

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;

            if (solveNQueens(board, col + 1))  // Recursive case
                return true;

            board[i][col] = 0;  // Backtrack
        }
    }

    return false;
}

int main() {
    std::vector<std::vector<int>> board(N, std::vector<int>(N, 0));

    if (solveNQueens(board, 0))
        printBoard(board);
    else
        std::cout << "No solution exists\n";

    return 0;
}
