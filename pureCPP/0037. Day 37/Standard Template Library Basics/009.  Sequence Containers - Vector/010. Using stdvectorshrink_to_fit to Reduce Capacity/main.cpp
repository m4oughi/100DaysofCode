#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(1000, 1); // Vector with 1000 elements
    numbers.erase(numbers.begin() + 500, numbers.end()); // Remove half of them

    std::cout << "Capacity before shrink: " << numbers.capacity() << "\n";
    numbers.shrink_to_fit();
    std::cout << "Capacity after shrink: " << numbers.capacity() << "\n";
    return 0;
}
