#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> memo;

bool isPalindrome(string& s, int start, int end) {
    while (start < end)
        if (s[start++] != s[end--])
            return false;
    return true;
}

int minCut(string s, int start, int end) {
    if (start >= end || isPalindrome(s, start, end))
        return 0;

    if (memo[start][end] != -1)  // Check if value is already computed
        return memo[start][end];

    int minCuts = end - start + 1;  // Initialize with maximum cuts

    for (int k = start; k < end; k++) {
        if (isPalindrome(s, start, k))
            minCuts = min(minCuts, 1 + minCut(s, k + 1, end));  // Store result
    }

    memo[start][end] = minCuts;
    return minCuts;
}

int main() {
    string s = "aab";
    int n = s.length();
    memo.resize(n, vector<int>(n, -1));  // Initialize memoization table
    cout << "Minimum cuts needed = " << minCut(s, 0, n - 1) << endl;
    return 0;
}
