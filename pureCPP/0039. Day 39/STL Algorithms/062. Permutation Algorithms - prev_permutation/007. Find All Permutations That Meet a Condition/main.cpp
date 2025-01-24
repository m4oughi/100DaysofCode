#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> nums{3, 2, 1};

    do {
        if (std::accumulate(nums.begin(), nums.end(), 0) > 5) {
            for (int n : nums) std::cout << n << " ";
            std::cout << "\n";
        }
    } while (std::prev_permutation(nums.begin(), nums.end()));

    // Output:
    // 3 2 1
    // 3 1 2
    // 2 3 1
}
