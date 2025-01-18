#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {50, 20, 30, 10, 40};

    std::sort(numbers.begin(), numbers.end()); // Random access iterators allow sorting

    std::cout << "Sorted vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
