#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    if (numbers.empty()) {
        std::cout << "List is empty.\n";
    } else {
        std::cout << "List is not empty.\n";
    }

    numbers.push_back(10);

    if (!numbers.empty()) {
        std::cout << "After adding an element, the list is no longer empty.\n";
    }

    return 0;
}
