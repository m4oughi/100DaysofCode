#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(5, 10); // Initialize vector with 5 elements, all set to 10
    std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    numbers.resize(10, 20); // Resize and fill new elements with 20
    std::cout << "After resizing: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\nNew size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    return 0;
}
