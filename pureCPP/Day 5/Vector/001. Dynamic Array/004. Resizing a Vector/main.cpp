#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(5, 100);  // Initialize vector with 5 elements, each set to 100

    std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    numbers.resize(10);  // Resize to hold 10 elements

    std::cout << "After resizing to 10 elements, size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    numbers.resize(3);  // Resize down to 3 elements

    std::cout << "After resizing to 3 elements, size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;

    return 0;
}
