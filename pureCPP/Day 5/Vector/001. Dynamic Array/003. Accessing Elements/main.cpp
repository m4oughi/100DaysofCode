#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Element at index 2: " << numbers[2] << std::endl;
    std::cout << "Element at index 2 using at(): " << numbers.at(2) << std::endl;
    std::cout << "First element: " << numbers.front() << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    return 0;
}
