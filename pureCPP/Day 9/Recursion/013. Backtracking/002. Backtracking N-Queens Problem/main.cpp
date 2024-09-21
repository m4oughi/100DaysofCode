#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[row][i] == 1)
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;

    for (int i = row, j = col; i < n && j >= 0; i++, j--)
        if (board[i][j] == 1)
            return false;

    return true;
}

bool solveNQueens(vector<vector<int>>& board, int col, int n) {
    if (col >= n)
        return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if (solveNQueens(board, col + 1, n))
                return true;
            board[i][col] = 0;  // Backtrack
        }
    }
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    if (solveNQueens(board, 0, n)) {
        cout << "Solution: " << endl;
        for (const auto& row : board) {
            for (int cell : row)
                cout << cell << " ";
            cout << endl;
        }
    } else {
        cout << "No solution" << endl;
    }
    return 0;
}
