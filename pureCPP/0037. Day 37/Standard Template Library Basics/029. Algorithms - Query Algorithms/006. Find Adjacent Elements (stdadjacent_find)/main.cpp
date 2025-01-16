#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 3, 5, 6};

    auto it = std::adjacent_find(numbers.begin(), numbers.end());

    if (it != numbers.end()) {
        std::cout << "Found adjacent duplicate: " << *it << "\n";
    } else {
        std::cout << "No adjacent duplicates found.\n";
    }

    return 0;
}
