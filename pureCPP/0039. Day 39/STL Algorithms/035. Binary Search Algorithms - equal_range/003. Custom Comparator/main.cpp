#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {50, 40, 30, 20, 10};
    int target = 30;

    auto range = std::equal_range(numbers.begin(), numbers.end(), target, std::greater<int>());

    std::cout << "Range of " << target << " in descending order: ["
              << (range.first - numbers.begin()) << ", "
              << (range.second - numbers.begin()) << ")\n";

    return 0;
}
