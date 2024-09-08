#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Clear the vector
    numbers.clear();

    std::cout << "Size of vector after clear: " << numbers.size() << std::endl;

    return 0;
}
