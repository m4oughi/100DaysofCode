#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> nums(1'000'000, 1);

    std::for_each(std::execution::par, nums.begin(), nums.end(), [](int &n) {
        n += 1; // Parallel modification
    });

    std::cout << "First element after increment: " << nums[0] << "\n";
    // Output: First element after increment: 2
}
