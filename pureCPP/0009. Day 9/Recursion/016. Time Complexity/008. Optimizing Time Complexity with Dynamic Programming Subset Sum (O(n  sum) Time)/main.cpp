#include <iostream>
using namespace std;

bool subsetSumDP(int set[], int n, int sum) {
    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (set[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
        }
    }

    return dp[n][sum];
}

int main() {
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);

    if (subsetSumDP(set, n, sum))
        cout << "Found a subset with given sum";
    else
        cout << "No subset with given sum";

    return 0;
}
