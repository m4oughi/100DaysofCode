#include <iostream>
using namespace std;

bool subsetSum(int set[], int n, int sum) {
    if (sum == 0)
        return true;  // Found a valid subset
    if (n == 0)
        return false;  // No valid subset
    if (set[n - 1] > sum)
        return subsetSum(set, n - 1, sum);  // Exclude element
    return subsetSum(set, n - 1, sum) || subsetSum(set, n - 1, sum - set[n - 1]);  // Include or exclude element
}

int main() {
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (subsetSum(set, n, sum))
        cout << "Found a subset with the given sum";
    else
        cout << "No subset with the given sum";
    return 0;
}
