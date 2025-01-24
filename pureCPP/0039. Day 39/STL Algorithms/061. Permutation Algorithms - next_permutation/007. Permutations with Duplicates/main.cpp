#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 1, 2};

    do {
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::next_permutation(nums.begin(), nums.end()));

    // Output:
    // 1 1 2
    // 1 2 1
    // 2 1 1
}
