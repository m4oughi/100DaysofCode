#include <iostream>
#include <vector>
#include <algorithm>

class GreaterThan {
    int threshold;
public:
    GreaterThan(int t) : threshold(t) {}
    bool operator()(int value) const {
        return value > threshold;
    }
};

int main() {
    std::vector<int> nums = {10, 20, 5, 30, 15};

    auto it = std::find_if(nums.begin(), nums.end(), GreaterThan(15));
    if (it != nums.end()) {
        std::cout << "First number greater than 15: " << *it << "\n";
    } else {
        std::cout << "No numbers greater than 15 found.\n";
    }

    return 0;
}
