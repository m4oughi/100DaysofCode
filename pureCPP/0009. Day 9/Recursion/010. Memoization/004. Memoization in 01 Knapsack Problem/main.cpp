#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    if (n == 0 || W == 0)
        return 0;

    if (memo[n][W] != -1)  // Check if value is already computed
        return memo[n][W];

    if (wt[n - 1] <= W)
        memo[n][W] = max(val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1),
                         knapsack(W, wt, val, n - 1));  // Store result
    else
        memo[n][W] = knapsack(W, wt, val, n - 1);

    return memo[n][W];
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;  // Maximum weight
    int n = val.size();
    memo.resize(n + 1, vector<int>(W + 1, -1));  // Initialize memoization table
    cout << "Maximum value in knapsack = " << knapsack(W, wt, val, n) << endl;
    return 0;
}
