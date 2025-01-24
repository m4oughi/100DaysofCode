#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    int sum = 0;

    std::for_each(nums.begin(), nums.end(), [&sum](int n) {
        sum += n;
    });

    std::cout << "Sum: " << sum << "\n";
    // Output: Sum: 15
}
