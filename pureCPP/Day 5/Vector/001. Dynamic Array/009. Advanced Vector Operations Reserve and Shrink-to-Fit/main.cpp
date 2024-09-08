#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    // Reserve capacity for 100 elements
    numbers.reserve(100);
    std::cout << "After reserving, capacity: " << numbers.capacity() << std::endl;

    // Add some elements
    for (int i = 0; i < 50; ++i) {
        numbers.push_back(i);
    }
    std::cout << "After adding elements, size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    // Shrink to fit
    numbers.shrink_to_fit();
    std::cout << "After shrink_to_fit, size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    return 0;
}
