#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Safety check implementation as before
}

bool solveNQUtil(vector<vector<int>>& board, int col, int n) {
    if (col >= n)  // Termination condition: All queens placed
        return true;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1, n))
                return true;
            board[i][col] = 0;  // Backtrack
        }
    }
    return false;  // No valid placement found
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    if (solveNQUtil(board, 0, n)) {
        cout << "Solution: " << endl;
        for (const auto& row : board) {
            for (int cell : row)
                cout << cell << "\t";
            cout << endl;
        }
    } else {
        cout << "No solution found" << endl;
    }
    return 0;
}
