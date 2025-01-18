#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40};

    std::cout << "Set elements using const_iterator: ";
    for (std::set<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
