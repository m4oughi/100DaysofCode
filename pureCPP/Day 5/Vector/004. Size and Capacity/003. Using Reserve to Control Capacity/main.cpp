#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.reserve(10);  // Pre-allocate memory for 10 elements
    std::cout << "Capacity after reserve: " << numbers.capacity() << std::endl;

    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i);
        std::cout << "Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;
    }

    return 0;
}
