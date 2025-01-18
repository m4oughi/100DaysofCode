#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original list: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    // Reverse the list
    numbers.reverse();

    std::cout << "\nReversed list: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
