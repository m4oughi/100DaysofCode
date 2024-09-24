#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& current, int index) {
    if (index == nums.size()) {
        // Print current subset
        cout << "{ ";
        for (int num : current)
            cout << num << " ";
        cout << "}" << endl;
        return;
    }
    
    // Exclude the current element
    generateSubsets(nums, current, index + 1);
    
    // Include the current element
    current.push_back(nums[index]);
    generateSubsets(nums, current, index + 1);
    current.pop_back();  // Backtrack
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> current;
    generateSubsets(nums, current, 0);
    return 0;
}
