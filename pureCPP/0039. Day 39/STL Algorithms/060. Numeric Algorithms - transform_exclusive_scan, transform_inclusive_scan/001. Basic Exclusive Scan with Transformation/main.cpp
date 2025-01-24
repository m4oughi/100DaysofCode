#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4};
    std::vector<int> result(nums.size());

    std::transform_exclusive_scan(nums.begin(), nums.end(), result.begin(), 0, std::plus<>(), [](int n) {
        return n * n;
    });

    std::cout << "Exclusive scan with squared transformation: ";
    for (int n : result) std::cout << n << " ";
    // Output: 0 1 5 14
}
