#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[row][i]) return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) return false;

    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
        if (board[i][j]) return false;

    return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col, int n) {
    if (col >= n)
        return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1, n))
                return true;
            board[i][col] = 0;  // Backtrack
        }
    }

    return false;
}

void printSolution(vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row)
            cout << cell << " ";
        cout << endl;
    }
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    if (solveNQUtil(board, 0, n)) {
        cout << "Solution: " << endl;
        printSolution(board);
    } else {
        cout << "Solution does not exist" << endl;
    }
    return 0;
}
