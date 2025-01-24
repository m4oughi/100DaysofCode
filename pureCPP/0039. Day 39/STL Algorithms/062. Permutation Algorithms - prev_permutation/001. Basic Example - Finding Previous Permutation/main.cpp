#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{3, 2, 1};

    if (std::prev_permutation(nums.begin(), nums.end())) {
        for (int n : nums) std::cout << n << " ";
    } else {
        std::cout << "No previous permutation exists.";
    }
    // Output: 3 1 2
}
