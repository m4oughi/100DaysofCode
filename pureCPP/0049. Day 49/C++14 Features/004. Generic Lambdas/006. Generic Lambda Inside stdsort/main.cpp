#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {5, 2, 9, 1, 6};

    std::sort(nums.begin(), nums.end(), [](auto a, auto b) { return a > b; });

    for (int n : nums) {
        std::cout << n << " ";
    }

    return 0;
}
