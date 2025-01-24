#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3};
    std::sort(nums.begin(), nums.end()); // Ensure starting from the smallest lexicographical order

    do {
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::next_permutation(nums.begin(), nums.end()));

    // Output:
    // 1 2 3
    // 1 3 2
    // 2 1 3
    // 2 3 1
    // 3 1 2
    // 3 2 1
}
