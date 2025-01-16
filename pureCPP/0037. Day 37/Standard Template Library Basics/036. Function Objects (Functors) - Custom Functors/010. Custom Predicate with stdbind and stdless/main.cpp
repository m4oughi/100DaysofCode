#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
    std::vector<int> nums = {1, 3, 5, 7, 9};

    auto isLessThanFive = std::bind(std::less<>(), std::placeholders::_1, 5);

    auto it = std::find_if(nums.begin(), nums.end(), isLessThanFive);
    if (it != nums.end()) {
        std::cout << "First element less than 5: " << *it << "\n";
    } else {
        std::cout << "No elements less than 5 found.\n";
    }

    return 0;
}
