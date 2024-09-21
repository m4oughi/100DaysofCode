#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> memo;

int lcs(string X, string Y, int m, int n) {
    if (m == 0 || n == 0)
        return 0;

    if (memo[m][n] != -1)  // Check if value is already computed
        return memo[m][n];

    if (X[m - 1] == Y[n - 1])
        memo[m][n] = 1 + lcs(X, Y, m - 1, n - 1);  // Store result
    else
        memo[m][n] = max(lcs(X, Y, m - 1, n), lcs(X, Y, m, n - 1));

    return memo[m][n];
}

int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    int m = X.length();
    int n = Y.length();
    memo.resize(m + 1, vector<int>(n + 1, -1));  // Initialize memoization table
    cout << "LCS length = " << lcs(X, Y, m, n) << endl;
    return 0;
}
