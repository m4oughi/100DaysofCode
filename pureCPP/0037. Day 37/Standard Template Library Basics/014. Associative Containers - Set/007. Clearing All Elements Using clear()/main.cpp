#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4};

    numbers.clear(); // Clear all elements

    if (numbers.empty()) {
        std::cout << "Set is empty.\n";
    } else {
        std::cout << "Set is not empty.\n";
    }
    return 0;
}
