#include <iostream>
#include <numeric>
#include <vector>
#include <execution>

int main() {
    std::vector<int> nums(1'000'000, 1); // Large dataset
    int result = std::transform_reduce(std::execution::par, nums.begin(), nums.end(), 0, std::plus<>(), [](int n) {
        return n * 2;
    });

    std::cout << "Parallel transform-reduce result: " << result << '\n'; // Output: 2,000,000
}
