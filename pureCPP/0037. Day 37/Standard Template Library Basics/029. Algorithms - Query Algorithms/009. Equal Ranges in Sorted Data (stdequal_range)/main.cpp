#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 2, 3, 4, 5};

    auto range = std::equal_range(numbers.begin(), numbers.end(), 2);

    std::cout << "Equal range for 2: [" 
              << std::distance(numbers.begin(), range.first) << ", "
              << std::distance(numbers.begin(), range.second) << ")\n";

    return 0;
}
