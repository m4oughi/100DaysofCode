#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int>& subset, int start, vector<int>& nums, vector<vector<int>>& result) {
    result.push_back(subset);  // Add the current subset to the result

    for (int i = start; i < nums.size(); i++) {
        subset.push_back(nums[i]);  // Include the current element
        generateSubsets(subset, i + 1, nums, result);  // Recursive depth is exponential
        subset.pop_back();  // Backtrack to explore other subsets
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    generateSubsets(subset, 0, nums, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> allSubsets = subsets(nums);

    cout << "All Subsets:" << endl;
    for (const auto& subset : allSubsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
