#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4};
    std::vector<int> result(nums.size());

    std::transform_inclusive_scan(nums.begin(), nums.end(), result.begin(), std::plus<>(), [](int n) {
        return n * 2;
    });

    std::cout << "Inclusive scan with doubled transformation: ";
    for (int n : result) std::cout << n << " ";
    // Output: 2 6 12 20
}
