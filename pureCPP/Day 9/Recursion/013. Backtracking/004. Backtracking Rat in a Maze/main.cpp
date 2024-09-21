#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& maze, int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1);
}

bool solveMazeUtil(vector<vector<int>>& maze, vector<vector<int>>& sol, int x, int y, int n) {
    if (x == n - 1 && y == n - 1) {  // Reached destination
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y, n)) {
        sol[x][y] = 1;

        if (solveMazeUtil(maze, sol, x + 1, y, n))  // Move down
            return true;
        if (solveMazeUtil(maze, sol, x, y + 1, n))  // Move right
            return true;

        sol[x][y] = 0;  // Backtrack
        return false;
    }

    return false;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        0, 1, 0, 1,
        0, 1, 0, 0,
        1, 1, 1, 1
    };
    int n = maze.size();
    vector<vector<int>> sol(n, vector<int>(n, 0));

    if (solveMazeUtil(maze, sol, 0, 0, n)) {
        cout << "Path through the maze: " << endl;
        for (const auto& row : sol) {
            for (int cell : row)
                cout << cell << " ";
            cout << endl;
        }
    } else {
        cout << "No path found" << endl;
    }
    return 0;
}
