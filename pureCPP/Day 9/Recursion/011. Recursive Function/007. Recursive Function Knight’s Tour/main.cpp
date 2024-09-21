#include <iostream>
#include <vector>
using namespace std;

const int N = 8;
vector<vector<int>> board(N, vector<int>(N, -1));

bool isSafe(int x, int y, int movei) {
    return (x >= 0 && x < N && y >= 0 && y < N && board[x][y] == -1);
}

bool knightTour(int curr_x, int curr_y, int movei, vector<int>& xMove, vector<int>& yMove) {
    if (movei == N * N)
        return true;

    for (int i = 0; i < 8; i++) {
        int next_x = curr_x + xMove[i];
        int next_y = curr_y + yMove[i];
        if (isSafe(next_x, next_y, movei)) {
            board[next_x][next_y] = movei;
            if (knightTour(next_x, next_y, movei + 1, xMove, yMove))
                return true;
            board[next_x][next_y] = -1;  // Backtrack
        }
    }
    return false;
}

int main() {
    vector<int> xMove = {2, 1, -1, -2, -2, -1, 1, 2};
    vector<int> yMove = {1, 2, 2, 1, -1, -2, -2, -1};

    board[0][0] = 0;  // Start from position (0,0)
    if (knightTour(0, 0, 1, xMove, yMove)) {
        cout << "Knight's tour found: " << endl;
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
