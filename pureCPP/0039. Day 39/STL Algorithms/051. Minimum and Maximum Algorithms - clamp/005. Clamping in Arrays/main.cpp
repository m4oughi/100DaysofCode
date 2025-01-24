#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 15, 25, -5, 0};
    int lower = 0;
    int upper = 20;

    std::cout << "Original array: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";

    std::transform(nums.begin(), nums.end(), nums.begin(), [&](int x) {
        return std::clamp(x, lower, upper);
    });

    std::cout << "Clamped array: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
