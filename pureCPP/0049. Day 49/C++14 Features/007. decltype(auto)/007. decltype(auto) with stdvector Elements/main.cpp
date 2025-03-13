#include <iostream>
#include <vector>

std::vector<int> numbers = {1, 2, 3, 4};

decltype(auto) getFirstElement() {
    return numbers[0]; // Returns int&
}

int main() {
    getFirstElement() = 10; // Modifies the vector
    std::cout << "Modified numbers[0]: " << numbers[0] << std::endl; // Output: 10
    return 0;
}
