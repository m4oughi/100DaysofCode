#include <iostream>

using namespace std;

int lcs(string X, string Y, int m, int n) {
    if (m == 0 || n == 0)
        return 0;

    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);  // Recursive depth depends on string lengths

    return max(lcs(X, Y, m - 1, n), lcs(X, Y, m, n - 1));
}
