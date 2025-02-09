#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Size before clear: " << numbers.size() << std::endl;

    numbers.clear(); // Removes all elements

    std::cout << "Size after clear: " << numbers.size() << std::endl;

    return 0;
}
