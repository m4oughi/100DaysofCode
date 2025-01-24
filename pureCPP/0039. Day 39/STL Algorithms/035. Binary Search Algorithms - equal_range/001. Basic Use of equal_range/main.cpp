#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 20, 20, 30, 40};
    int target = 20;

    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    std::cout << "Range of value " << target << ": ["
              << (range.first - numbers.begin()) << ", " 
              << (range.second - numbers.begin()) << ")\n";

    return 0;
}
