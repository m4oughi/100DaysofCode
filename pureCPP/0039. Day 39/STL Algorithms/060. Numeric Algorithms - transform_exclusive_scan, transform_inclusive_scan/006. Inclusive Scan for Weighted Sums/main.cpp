#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{5, 10, 15, 20};
    std::vector<int> weights{1, 2, 3, 4};
    std::vector<int> result(nums.size());

    std::transform_inclusive_scan(nums.begin(), nums.end(), result.begin(), std::plus<>(), [&](int n) {
        return n * weights[&n - &nums[0]];
    });

    std::cout << "Weighted sums with inclusive scan: ";
    for (int n : result) std::cout << n << " ";
    // Output: 5 25 70 150
}
