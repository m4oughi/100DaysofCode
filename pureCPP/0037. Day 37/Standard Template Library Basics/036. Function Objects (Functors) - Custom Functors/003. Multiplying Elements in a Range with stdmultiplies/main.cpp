#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    int product = std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<>());
    std::cout << "Product of elements: " << product << "\n";

    return 0;
}
