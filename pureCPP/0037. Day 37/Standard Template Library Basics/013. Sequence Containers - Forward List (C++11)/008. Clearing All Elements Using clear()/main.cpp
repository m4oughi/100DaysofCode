#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4};

    numbers.clear(); // Clear all elements

    if (numbers.empty()) {
        std::cout << "List is empty.\n";
    } else {
        std::cout << "List is not empty.\n";
    }
    return 0;
}
