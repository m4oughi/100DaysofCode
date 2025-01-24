#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 1, 0, 0}; // Represent combinations (1: selected, 0: not selected)

    std::sort(nums.begin(), nums.end());
    do {
        for (int n : nums) std::cout << n;
        std::cout << "\n";
    } while (std::next_permutation(nums.begin(), nums.end()));

    // Output:
    // 0011
    // 0101
    // 0110
    // 1001
    // 1010
    // 1100
}
