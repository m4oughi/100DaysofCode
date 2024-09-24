bool placeQueens(int board[4][4], int row);
bool isSafe(int board[4][4], int row, int col);

bool placeQueens(int board[4][4], int row) {
    if (row >= 4)
        return true;

    for (int col = 0; col < 4; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 1;

            if (placeQueens(board, row + 1))  // Recursively place next queen
                return true;

            board[row][col] = 0;  // Backtrack if placing queen doesn't lead to solution
        }
    }

    return false;  // No solution found
}

bool isSafe(int board[4][4], int row, int col) {
    for (int i = 0; i < row; i++)
        if (board[i][col])
            return false;

    return true;  // Check if the queen can be placed safely
}
