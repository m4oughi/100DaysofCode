#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 0; i < 15; ++i) {
        numbers.push_back(i);
    }

    std::cout << "Size before clear: " << numbers.size() << std::endl;
    std::cout << "Capacity before clear: " << numbers.capacity() << std::endl;

    // Clear the vector
    numbers.clear();

    std::cout << "Size after clear: " << numbers.size() << std::endl;
    std::cout << "Capacity after clear: " << numbers.capacity() << std::endl;

    return 0;
}
