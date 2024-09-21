#include <iostream>
#define N 4
using namespace std;

void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++)  // Check this row on left side
        if (board[row][i])
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)  // Check upper diagonal on left side
        if (board[i][j])
            return false;
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)  // Check lower diagonal on left side
        if (board[i][j])
            return false;
    return true;
}

bool solveNQUtil(int board[N][N], int col) {
    if (col >= N)  // Base case: All queens placed
        return true;
    for (int i = 0; i < N; i++) {  // Try placing queen in all rows one by one
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1))  // Recursive call
                return true;
            board[i][col] = 0;  // Backtrack
        }
    }
    return false;  // No valid position found
}

bool solveNQ() {
    int board[N][N] = {0};
    if (!solveNQUtil(board, 0)) {
        cout << "Solution does not exist";
        return false;
    }
    printSolution(board);
    return true;
}

int main() {
    solveNQ();
    return 0;
}
