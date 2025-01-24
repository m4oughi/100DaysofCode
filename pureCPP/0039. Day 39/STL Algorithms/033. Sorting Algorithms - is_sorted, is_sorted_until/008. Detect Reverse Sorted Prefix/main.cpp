#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 8, 6, 5, 3, 9, 12};

    auto it = std::is_sorted_until(numbers.begin(), numbers.end(), std::greater<int>());
    std::cout << "Reverse sorted prefix: ";
    for (auto i = numbers.begin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    return 0;
}
