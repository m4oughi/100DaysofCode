#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    int* ptr = numbers.data();  // Get a pointer to the first element

    // Modify elements using pointer arithmetic
    *(ptr + 1) = 25;
    *(ptr + 3) = 45;

    // Display the modified elements
    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
