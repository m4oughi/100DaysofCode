#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{3, 2, 1};
    std::vector<int> target{2, 3, 1};

    do {
        if (nums < target) {
            for (int n : nums) std::cout << n << " ";
            std::cout << "\n";
        }
    } while (std::prev_permutation(nums.begin(), nums.end()));

    // Output:
    // 2 1 3
    // 1 3 2
    // 1 2 3
}
