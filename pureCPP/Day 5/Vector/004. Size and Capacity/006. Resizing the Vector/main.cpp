#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(5, 100);

    std::cout << "Initial size: " << numbers.size() << std::endl;
    std::cout << "Initial capacity: " << numbers.capacity() << std::endl;

    // Increase the size
    numbers.resize(10, 200);
    std::cout << "Size after increasing: " << numbers.size() << std::endl;
    std::cout << "Capacity after increasing: " << numbers.capacity() << std::endl;

    // Decrease the size
    numbers.resize(3);
    std::cout << "Size after decreasing: " << numbers.size() << std::endl;
    std::cout << "Capacity after decreasing: " << numbers.capacity() << std::endl;

    return 0;
}
