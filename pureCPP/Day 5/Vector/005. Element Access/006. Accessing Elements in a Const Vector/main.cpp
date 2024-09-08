#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {11, 22, 33, 44, 55};

    std::cout << "Accessing elements in a const vector:" << std::endl;
    std::cout << "First element: " << numbers.front() << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    // numbers[2] = 99;  // Uncommenting this line would cause a compilation error

    return 0;
}
