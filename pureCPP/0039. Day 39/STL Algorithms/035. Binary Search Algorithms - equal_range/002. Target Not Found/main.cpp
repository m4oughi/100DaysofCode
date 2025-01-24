#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int target = 25;

    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    std::cout << "Range for non-existent value " << target << ": ["
              << (range.first - numbers.begin()) << ", "
              << (range.second - numbers.begin()) << ")\n";

    return 0;
}
