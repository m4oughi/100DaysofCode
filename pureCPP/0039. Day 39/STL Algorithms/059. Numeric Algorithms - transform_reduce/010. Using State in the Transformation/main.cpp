#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    int factor = 3;

    int result = std::transform_reduce(nums.begin(), nums.end(), 0, std::plus<>(), [factor](int n) {
        return n * factor;
    });

    std::cout << "Result with factor: " << result << '\n'; // Output: 45
}
