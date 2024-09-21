#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

int uniquePaths(int m, int n) {
    if (m == 1 || n == 1)
        return 1;

    if (memo[m - 1][n - 1] != -1)  // Check if value is already computed
        return memo[m - 1][n - 1];

    memo[m - 1][n - 1] = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);  // Store result
    return memo[m - 1][n - 1];
}

int main() {
    int m = 3, n = 3;  // Grid size
    memo.resize(m, vector<int>(n, -1));  // Initialize memoization table
    cout << "Number of unique paths = " << uniquePaths(m, n) << endl;
    return 0;
}
