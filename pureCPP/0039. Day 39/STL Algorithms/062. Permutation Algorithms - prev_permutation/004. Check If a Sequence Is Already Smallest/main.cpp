#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3};

    if (!std::prev_permutation(nums.begin(), nums.end())) {
        std::cout << "The sequence is already at its smallest permutation.\n";
    }
    // Output: The sequence is already at its smallest permutation.
}
