#include <iostream>
#include <vector>

// Function that accepts a container and prints its elements using const_iterator
void printElements(const std::vector<int>& container) {
    for (std::vector<int>::const_iterator it = container.cbegin(); it != container.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    std::cout << "Container elements: ";
    printElements(numbers);

    // Uncommenting the next line in printElements will cause a compilation error
    // *container.begin() = 100;

    return 0;
}
