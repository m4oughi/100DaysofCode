#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    try {
        std::cout << "Element at index 2: " << numbers.at(2) << std::endl;
        std::cout << "Element at index 10: " << numbers.at(10) << std::endl;  // Out of bounds
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
