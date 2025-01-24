#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> nums{5, 4, 3, 2, 1};

    std::for_each(std::execution::par, nums.begin(), nums.end(), [](int &n) {
        n -= 1; // Modify each element before generating permutations
    });

    do {
        for (int n : nums) std::cout << n << " ";
        std::cout << "\n";
    } while (std::prev_permutation(nums.begin(), nums.end()));

    // Output:
    // Permutations of the modified dataset
}
