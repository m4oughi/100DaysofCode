#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};
    
    std::cout << "Accessing elements:\n";
    std::cout << "Using []: " << numbers[1] << "\n";
    std::cout << "Using at(): " << numbers.at(1) << "\n";

    return 0;
}
