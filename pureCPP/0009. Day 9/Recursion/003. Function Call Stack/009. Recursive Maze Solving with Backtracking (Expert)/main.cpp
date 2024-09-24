#include <iostream>
#define N 4  // Define the size of the maze (you can adjust this)

using namespace std;

// Function to check if x, y is a valid move in the maze
bool isSafe(int maze[N][N], int x, int y) {
    // Check if x and y are within the boundaries of the maze and
    // the cell maze[x][y] is 1 (which means it's a valid path)
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

bool solveMaze(int maze[N][N], int x, int y, int sol[N][N]) {
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) { // Base Case: reached destination
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y)) { // Recursive Case: try moving forward
        sol[x][y] = 1;

        if (solveMaze(maze, x + 1, y, sol)) // Move right
            return true;
        if (solveMaze(maze, x, y + 1, sol)) // Move down
            return true;

        sol[x][y] = 0; // Backtrack: undo move
    }

    return false;
}


// Utility function to print the solution matrix
void printSolution(int sol[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Define a maze where 1 is a path and 0 is a blocked cell
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int sol[N][N] = {0};  // Solution matrix initialized to 0

    if (solveMaze(maze, 0, 0, sol)) {
        printSolution(sol);  // Print the solution if one exists
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}
