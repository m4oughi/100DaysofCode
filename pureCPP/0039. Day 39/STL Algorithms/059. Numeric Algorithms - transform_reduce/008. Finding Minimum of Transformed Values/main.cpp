#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{10, 20, 30, 40};

    int min_transformed = std::transform_reduce(nums.begin(), nums.end(), INT_MAX, std::min<>(), [](int n) {
        return n * n;
    });

    std::cout << "Minimum of squares: " << min_transformed << '\n'; // Output: 100
}
