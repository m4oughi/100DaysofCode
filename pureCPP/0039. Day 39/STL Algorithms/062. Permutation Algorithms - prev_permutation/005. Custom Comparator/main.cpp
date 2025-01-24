#include <iostream>
#include <vector>
#include <algorithm>

bool customCompare(int a, int b) {
    return a > b; // Descending order
}

int main() {
    std::vector<int> nums{3, 2, 1};

    if (std::prev_permutation(nums.begin(), nums.end(), customCompare)) {
        for (int n : nums) std::cout << n << " ";
    } else {
        std::cout << "No previous permutation exists.";
    }
    // Output: 3 1 2
}
