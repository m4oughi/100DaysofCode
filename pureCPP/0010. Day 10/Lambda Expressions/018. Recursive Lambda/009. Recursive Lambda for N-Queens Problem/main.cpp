#include <iostream>
#include <vector>
#include <functional>

int main() {
    int n = 4;
    std::vector<int> board(n, -1);
    
    std::function<void(int)> printSolution = [&](int n) {
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                if (board[row] == col) std::cout << "Q ";
                else std::cout << ". ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    };

    std::function<bool(int, int)> isSafe = [&](int row, int col) {
        for (int i = 0; i < row; ++i) {
            if (board[i] == col || abs(board[i] - col) == abs(i - row)) return false;
        }
        return true;
    };

    std::function<void(int)> solveNQueens = [&](int row) {
        if (row == n) {
            printSolution(n);
            return;
        }
        for (int col = 0; col < n; ++col) {
            if (isSafe(row, col)) {
                board[row] = col;
                solveNQueens(row + 1);
                board[row] = -1; // backtrack
            }
        }
    };

    solveNQueens(0);
    return 0;
}
