#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{3, 1, 2};

    std::sort(nums.begin(), nums.end()); // Ensure ascending order
    if (std::next_permutation(nums.begin(), nums.end())) {
        std::cout << "Next permutation: ";
        for (int n : nums) std::cout << n << " ";
        // Output: Next permutation: 1 3 2
    }
}
