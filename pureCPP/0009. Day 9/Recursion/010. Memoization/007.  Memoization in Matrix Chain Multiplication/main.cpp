#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

int matrixChainMultiplication(vector<int>& p, int i, int j) {
    if (i == j)
        return 0;

    if (memo[i][j] != -1)  // Check if value is already computed
        return memo[i][j];

    int minCost = INT_MAX;
    for (int k = i; k < j; k++) {
        int cost = matrixChainMultiplication(p, i, k) +
                   matrixChainMultiplication(p, k + 1, j) +
                   p[i - 1] * p[k] * p[j];
        minCost = min(minCost, cost);
    }

    memo[i][j] = minCost;  // Store result
    return minCost;
}

int main() {
    vector<int> p = {1, 2, 3, 4};  // Dimensions of matrices
    int n = p.size();
    memo.resize(n, vector<int>(n, -1));  // Initialize memoization table
    cout << "Minimum cost = " << matrixChainMultiplication(p, 1, n - 1) << endl;
    return 0;
}
