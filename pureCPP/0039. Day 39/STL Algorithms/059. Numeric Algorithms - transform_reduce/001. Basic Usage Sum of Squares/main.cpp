#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    int result = std::transform_reduce(nums.begin(), nums.end(), 0, std::plus<>(), [](int n) {
        return n * n;
    });

    std::cout << "Sum of squares: " << result << '\n'; // Output: 55
}
