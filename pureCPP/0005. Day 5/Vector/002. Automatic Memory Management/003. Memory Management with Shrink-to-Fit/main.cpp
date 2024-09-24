#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 0; i < 100; ++i) {
        numbers.push_back(i);
    }

    std::cout << "Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;

    // Remove some elements
    numbers.erase(numbers.begin() + 50, numbers.end());

    std::cout << "After erasing, Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;

    // Shrink the vector's capacity to fit its size
    numbers.shrink_to_fit();

    std::cout << "After shrink_to_fit, Size: " << numbers.size() << ", Capacity: " << numbers.capacity() << std::endl;

    return 0;
}
