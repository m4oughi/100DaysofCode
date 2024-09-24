#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {7, 14, 21, 28, 35};

    int* ptr = numbers.data();  // Get a pointer to the first element

    std::cout << "Accessing elements using raw pointer:" << std::endl;
    std::cout << "First element: " << *ptr << std::endl;
    std::cout << "Second element: " << *(ptr + 1) << std::endl;

    return 0;
}
