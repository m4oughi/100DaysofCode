#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4};

    numbers.clear();  // Removes all elements

    if (numbers.empty()) {
        std::cout << "The set is empty after calling clear()." << std::endl;
    }

    return 0;
}
