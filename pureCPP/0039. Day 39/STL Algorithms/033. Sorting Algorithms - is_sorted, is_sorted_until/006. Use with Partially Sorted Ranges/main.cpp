#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 1, 3, 5};

    auto it = std::is_sorted_until(numbers.begin(), numbers.end());
    std::cout << "Sorted prefix: ";
    for (auto i = numbers.begin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    return 0;
}
