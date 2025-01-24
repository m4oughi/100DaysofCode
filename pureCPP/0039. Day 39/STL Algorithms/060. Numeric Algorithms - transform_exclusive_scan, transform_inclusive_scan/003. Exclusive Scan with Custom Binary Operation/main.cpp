#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4};
    std::vector<int> result(nums.size());

    std::transform_exclusive_scan(nums.begin(), nums.end(), result.begin(), 1, std::multiplies<>(), [](int n) {
        return n + 1;
    });

    std::cout << "Exclusive scan with multiplication and (n+1) transformation: ";
    for (int n : result) std::cout << n << " ";
    // Output: 1 2 6 24
}
