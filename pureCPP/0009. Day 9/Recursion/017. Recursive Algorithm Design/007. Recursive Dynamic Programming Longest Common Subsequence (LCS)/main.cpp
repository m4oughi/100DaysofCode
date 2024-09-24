#include <iostream>
#include <vector>
using namespace std;

int lcs(string X, string Y, int m, int n, vector<vector<int>>& dp) {
    if (m == 0 || n == 0)
        return 0;  // Base case
    if (dp[m][n] != -1)
        return dp[m][n];  // Memoized result
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);
    return dp[m][n] = max(lcs(X, Y, m - 1, n, dp), lcs(X, Y, m, n - 1, dp));
}

int main() {
    string X = "AGGTAB", Y = "GXTXAYB";
    int m = X.size(), n = Y.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << lcs(X, Y, m, n, dp);
    return 0;
}
