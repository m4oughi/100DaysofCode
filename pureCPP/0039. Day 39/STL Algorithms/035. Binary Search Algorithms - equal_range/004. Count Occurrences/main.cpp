#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 10, 10, 10, 20, 30};
    int target = 10;

    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    std::cout << "Count of " << target << ": " << (range.second - range.first) << "\n";

    return 0;
}
