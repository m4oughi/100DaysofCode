#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 15, 10, 25, 20};

    std::sort(numbers.rbegin(), numbers.rend()); // Sort in descending order

    std::cout << "Sorted in descending order using reverse iterators: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
