#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30, 35};
    auto is_even = [](int x) { return x % 2 == 0; };

    std::partition(numbers.begin(), numbers.end(), is_even);

    int target = 20;
    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    std::cout << "Range of " << target << ": ["
              << (range.first - numbers.begin()) << ", "
              << (range.second - numbers.begin()) << ")\n";

    return 0;
}
