#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    int factor = 2;

    std::for_each(nums.begin(), nums.end(), [factor](int n) {
        std::cout << n * factor << " "; // factor captured by value
    });
    std::cout << "\n";

    std::for_each(nums.begin(), nums.end(), [&factor](int n) {
        factor += n; // factor modified by reference
    });

    std::cout << "Factor after modification: " << factor << "\n";
    // Output:
    // 2 4 6 8 10
    // Factor after modification: 17
}
