#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 2, 5, 2};

    auto it = std::find(numbers.rbegin(), numbers.rend(), 2); // Reverse iterator

    if (it != numbers.rend()) {
        std::cout << "Last occurrence of 2 is: " << *it << "\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
