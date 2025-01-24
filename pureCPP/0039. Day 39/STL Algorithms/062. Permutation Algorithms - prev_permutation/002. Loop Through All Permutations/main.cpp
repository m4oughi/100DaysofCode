#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{3, 2, 1};

    do {
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::prev_permutation(nums.begin(), nums.end()));

    // Output:
    // 3 2 1
    // 3 1 2
    // 2 3 1
    // 2 1 3
    // 1 3 2
    // 1 2 3
}
