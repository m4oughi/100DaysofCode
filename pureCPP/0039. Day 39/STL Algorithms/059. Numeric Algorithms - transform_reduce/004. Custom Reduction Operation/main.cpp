#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{2, 3, 4};
    int product = std::transform_reduce(nums.begin(), nums.end(), 1, std::multiplies<>(), [](int n) {
        return n + 1;
    });

    std::cout << "Product of (n+1): " << product << '\n'; // Output: 60
}
