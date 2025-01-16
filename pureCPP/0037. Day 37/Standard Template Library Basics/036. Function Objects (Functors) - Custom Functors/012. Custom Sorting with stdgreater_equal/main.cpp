#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> nums = {5, 2, 8, 1, 7};

    std::sort(nums.begin(), nums.end(), std::greater_equal<>());
    std::cout << "Sorted in non-increasing order: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
