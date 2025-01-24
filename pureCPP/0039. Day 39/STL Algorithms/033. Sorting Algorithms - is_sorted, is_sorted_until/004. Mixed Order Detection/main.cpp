#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 10, 8, 7, 12};

    auto it = std::is_sorted_until(numbers.begin(), numbers.end());
    if (it != numbers.end()) {
        std::cout << "The list is sorted until: " << *it << "\n";
    } else {
        std::cout << "The entire list is sorted.\n";
    }
    return 0;
}
