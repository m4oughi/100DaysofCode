#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

int maxPathSum(vector<vector<int>>& matrix, int i, int j) {
    int m = matrix.size();
    int n = matrix[0].size();

    if (i >= m || j >= n)
        return 0;

    if (memo[i][j] != -1)  // Check if value is already computed
        return memo[i][j];

    int right = maxPathSum(matrix, i, j + 1);
    int down = maxPathSum(matrix, i + 1, j);
    memo[i][j] = matrix[i][j] + max(right, down);  // Store result

    return memo[i][j];
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m = matrix.size();
    int n = matrix[0].size();
    memo.resize(m, vector<int>(n, -1));  // Initialize memoization table
    cout << "Maximum Path Sum = " << maxPathSum(matrix, 0, 0) << endl;
    return 0;
}
