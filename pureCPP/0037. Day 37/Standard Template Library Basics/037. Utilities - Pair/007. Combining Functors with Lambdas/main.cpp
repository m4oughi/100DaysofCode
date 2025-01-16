#include <iostream>
#include <vector>
#include <algorithm>

class IsEven {
public:
    bool operator()(int value) const {
        return value % 2 == 0;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};

    nums.erase(std::remove_if(nums.begin(), nums.end(), IsEven()), nums.end());

    std::cout << "After removing even numbers: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
