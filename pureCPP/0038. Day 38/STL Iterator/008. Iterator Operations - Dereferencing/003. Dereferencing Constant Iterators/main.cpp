#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    std::cout << "Accessing elements using const_iterator: ";
    for (std::vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
        std::cout << *it << " ";
        // *it = 100; // Uncommenting this line will cause a compilation error
    }

    return 0;
}