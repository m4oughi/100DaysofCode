#include <iostream>
#include <numeric>
#include <vector>
#include <execution>

int main() {
    std::vector<int> nums(1'000'000, 1);
    std::vector<int> result(nums.size());

    std::transform_inclusive_scan(std::execution::par, nums.begin(), nums.end(), result.begin(), std::plus<>(), [](int n) {
        return n * 2;
    });

    std::cout << "Parallel inclusive scan result: " << result.back() << '\n'; // Output: 2,000,000
}
