#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> memo;

int editDistance(string s1, string s2, int m, int n) {
    if (m == 0)
        return n;
    if (n == 0)
        return m;

    if (memo[m][n] != -1)  // Check if value is already computed
        return memo[m][n];

    if (s1[m - 1] == s2[n - 1])
        memo[m][n] = editDistance(s1, s2, m - 1, n - 1);  // Store result
    else
        memo[m][n] = 1 + min(editDistance(s1, s2, m - 1, n),    // Insert
                            min(editDistance(s1, s2, m, n - 1),  // Remove
                                editDistance(s1, s2, m - 1, n - 1) // Replace
                               ));

    return memo[m][n];
}

int main() {
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.length();
    int n = s2.length();
    memo.resize(m + 1, vector<int>(n + 1, -1));  // Initialize memoization table
    cout << "Edit Distance = " << editDistance(s1, s2, m, n) << endl;
    return 0;
}
