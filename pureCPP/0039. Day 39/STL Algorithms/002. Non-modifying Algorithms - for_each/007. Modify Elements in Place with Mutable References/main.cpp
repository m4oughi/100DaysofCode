#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int &n) {
        n *= 2; // Modifies the original vector
    });

    for (int n : nums) std::cout << n << " ";
    // Output: 2 4 6 8 10
}
