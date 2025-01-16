#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};

    auto it = std::find(numbers.begin(), numbers.end(), 3);

    if (it != numbers.end()) {
        std::cout << "Found element: " << *it << "\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
