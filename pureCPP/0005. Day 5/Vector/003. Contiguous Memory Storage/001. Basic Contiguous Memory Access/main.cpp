#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Access elements using pointer arithmetic
    int* ptr = numbers.data();  // Get a pointer to the first element

    std::cout << "First element: " << *ptr << std::endl;
    std::cout << "Second element: " << *(ptr + 1) << std::endl;
    std::cout << "Third element: " << *(ptr + 2) << std::endl;

    return 0;
}
