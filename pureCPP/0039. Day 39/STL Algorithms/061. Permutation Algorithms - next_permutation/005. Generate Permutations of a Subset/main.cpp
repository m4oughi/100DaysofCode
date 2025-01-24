#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4};

    if (std::next_permutation(nums.begin() + 1, nums.end())) {
        std::cout << "Next permutation for subset: ";
        for (int n : nums) std::cout << n << " ";
        // Output: Next permutation for subset: 1 2 4 3
    }
}
