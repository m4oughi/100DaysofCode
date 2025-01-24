#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3};

    if (!std::next_permutation(nums.begin(), nums.end())) {
        std::sort(nums.begin(), nums.end()); // Return to the first permutation
        std::cout << "Reached the end, restarting with: ";
        for (int n : nums) std::cout << n << " ";
        // Output: Reached the end, restarting with: 1 2 3
    }
}
