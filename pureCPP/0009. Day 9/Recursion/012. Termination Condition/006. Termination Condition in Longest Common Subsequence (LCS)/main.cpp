#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lcs(string X, string Y, int m, int n) {
    if (m == 0 || n == 0)  // Termination condition
        return 0;

    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m - 1, n), lcs(X, Y, m, n - 1));
}

int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    int m = X.length();
    int n = Y.length();
    cout << "Length of LCS = " << lcs(X, Y, m, n) << endl;
    return 0;
}
