#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> result(nums.size());

    std::transform(nums.begin(), nums.end(), result.begin(), std::negate<>());
    std::cout << "Negated values: ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}
