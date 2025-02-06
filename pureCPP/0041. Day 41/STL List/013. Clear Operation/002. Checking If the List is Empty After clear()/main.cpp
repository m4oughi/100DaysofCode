#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    numbers.clear();

    if (numbers.empty()) {
        std::cout << "The list is empty after clear().\n";
    } else {
        std::cout << "The list still has elements.\n";
    }

    return 0;
}
