#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3};

    if (std::next_permutation(nums.begin(), nums.end())) {
        std::cout << "Next permutation: ";
        for (int n : nums) std::cout << n << " ";
        // Output: Next permutation: 1 3 2
    } else {
        std::cout << "No next permutation exists.";
    }
}
