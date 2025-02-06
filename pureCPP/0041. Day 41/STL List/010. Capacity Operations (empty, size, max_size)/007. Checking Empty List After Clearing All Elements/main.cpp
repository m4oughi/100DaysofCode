#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {5, 10, 15, 20};

    numbers.clear(); // Remove all elements

    if (numbers.empty()) {
        std::cout << "List is empty after calling clear().\n";
    } else {
        std::cout << "List is not empty.\n";
    }

    return 0;
}
