#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> nums = {10, 50, 20, 40, 30};

    std::sort(nums.begin(), nums.end(), std::greater<>());
    std::cout << "Sorted in descending order: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
