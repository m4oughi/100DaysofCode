#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{5, 4, 3, 2, 1};

    int count = 0;
    do {
        if (++count > 10) break; // Limit to first 10 permutations
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::prev_permutation(nums.begin(), nums.end()));

    // Output:
    // First 10 permutations in reverse lexicographical order
}
