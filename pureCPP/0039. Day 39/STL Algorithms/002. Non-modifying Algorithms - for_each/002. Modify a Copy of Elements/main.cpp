#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int n) {
        std::cout << n * n << " ";
    });
    // Output: 1 4 9 16 25
}
