#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25, 30};
    int target = 20;

    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    if (range.first != range.second) {
        std::cout << "Value " << target << " found at index " 
                  << (range.first - numbers.begin()) << "\n";
    } else {
        std::cout << "Value " << target << " not found.\n";
    }

    return 0;
}
