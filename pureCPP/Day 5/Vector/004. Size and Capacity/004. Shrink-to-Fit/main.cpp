#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 0; i < 20; ++i) {
        numbers.push_back(i);
    }

    std::cout << "Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;

    // Remove some elements
    numbers.resize(10);
    std::cout << "Size after resizing: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;

    // Shrink the capacity to match the size
    numbers.shrink_to_fit();
    std::cout << "Capacity after shrink_to_fit: " << numbers.capacity() << std::endl;

    return 0;
}
