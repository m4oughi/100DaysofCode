#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

bool subsetSum(vector<int>& nums, int sum, int n) {
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    if (memo[n][sum] != -1)  // Check if value is already computed
        return memo[n][sum];

    if (nums[n - 1] > sum)
        memo[n][sum] = subsetSum(nums, sum, n - 1);  // Store result
    else
        memo[n][sum] = subsetSum(nums, sum, n - 1) || subsetSum(nums, sum - nums[n - 1], n - 1);

    return memo[n][sum];
}

int main() {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = nums.size();
    memo.resize(n + 1, vector<int>(sum + 1, -1));  // Initialize memoization table
    cout << "Is there a subset with sum " << sum << " ? " << (subsetSum(nums, sum, n) ? "Yes" : "No") << endl;
    return 0;
}
