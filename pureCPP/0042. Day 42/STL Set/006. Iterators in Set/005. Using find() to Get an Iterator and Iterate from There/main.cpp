#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.find(30); // Find 30
    if (it != numbers.end()) {
        std::cout << "Iterating from 30 onwards: ";
        for (; it != numbers.end(); ++it) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
