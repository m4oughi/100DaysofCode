#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{3, 2, 1};

    if (std::next_permutation(nums.begin(), nums.end())) {
        std::cout << "Next permutation: ";
        for (int n : nums) std::cout << n << " ";
    } else {
        std::cout << "No next permutation exists.\n"; // Output: No next permutation exists.
    }
}
