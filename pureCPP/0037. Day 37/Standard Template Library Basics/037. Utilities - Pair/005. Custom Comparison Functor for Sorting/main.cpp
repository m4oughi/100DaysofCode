#include <iostream>
#include <vector>
#include <algorithm>

class DescendingOrder {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::vector<int> nums = {10, 20, 5, 30, 15};

    std::sort(nums.begin(), nums.end(), DescendingOrder());
    std::cout << "Sorted in descending order: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
