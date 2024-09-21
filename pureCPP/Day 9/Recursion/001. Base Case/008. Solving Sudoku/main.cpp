#include <iostream>

using namespace std;


// Function to check if the grid is completely filled
bool findUnassignedLocation(int grid[9][9], int &row, int &col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0)
                return true;
        }
    }
    return false; // No unassigned location left
}

// Function to check if it's safe to place a number in the grid
bool isSafe(int grid[9][9], int row, int col, int num) {
    // Check row
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num)
            return false;
    }

    // Check column
    for (int x = 0; x < 9; x++) {
        if (grid[x][col] == num)
            return false;
    }

    // Check 3x3 sub-grid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// The main Sudoku solving function using recursion
bool solveSudoku(int grid[9][9]) {
    int row, col;

    // If no unassigned location is left, Sudoku is solved
    if (!findUnassignedLocation(grid, row, col))
        return true;

    // Try digits from 1 to 9 in the unassigned position
    for (int num = 1; num <= 9; num++) {
        // If placing the number is safe
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; // Place the number

            // Recursively try to solve the rest of the puzzle
            if (solveSudoku(grid))
                return true;

            // If placing num doesn't lead to a solution, backtrack
            grid[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

// Utility function to print the grid
void printGrid(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    // 0 represents unassigned cells in the Sudoku grid
    int grid[9][9] = {
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

    if (solveSudoku(grid)) {
        printGrid(grid);
    } else {
        cout << "No solution exists" << endl;
    }