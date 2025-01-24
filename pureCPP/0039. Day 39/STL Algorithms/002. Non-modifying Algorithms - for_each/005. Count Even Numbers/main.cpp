#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    int evenCount = 0;

    std::for_each(nums.begin(), nums.end(), [&evenCount](int n) {
        if (n % 2 == 0) ++evenCount;
    });

    std::cout << "Number of even numbers: " << evenCount << "\n";
    // Output: Number of even numbers: 2
}
